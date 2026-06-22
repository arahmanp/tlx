#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

// Struktur untuk mempermudah perbandingan state DP
struct State {
    int profit = 0;
    int weight = 0;

    // Operator untuk mempermudah pencarian solusi terbaik
    // Prioritas: 1. Profit terbesar, 2. Weight terkecil
    bool operator>(const State& other) const {
        if (profit != other.profit) {
            return profit > other.profit;
        }
        return weight < other.weight;
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    if (!(std::cin >> n >> k)) return 0;

    std::vector<int> w(k + 1), h(k + 1);
    for (int i = 1; i <= k; i++) {
        std::cin >> w[i] >> h[i];
    }

    // dp[i][c] menyimpan State terbaik menggunakan batu dari indeks i sampai k dengan kapasitas c
    std::vector<std::vector<State>> dp(k + 2, std::vector<State>(n + 1));
    std::vector<std::vector<bool>> take(k + 2, std::vector<bool>(n + 1, false));

    // Isi DP secara mundur dari batu ke-K ke batu ke-1
    for (int i = k; i >= 1; i--) {
        for (int c = 0; c <= n; c++) {
            // Opsi 1: Lewati batu ke-i
            State best = dp[i + 1][c];
            take[i][c] = false;

            // Opsi 2: Ambil batu ke-i (jika kapasitas cukup)
            if (w[i] <= c) {
                State current;
                current.profit = dp[i + 1][c - w[i]].profit + h[i];
                current.weight = dp[i + 1][c - w[i]].weight + w[i];

                // Tie-breaking: 
                // Jika profit & weight sama, kita tetep pilih 'current' (Ambil) 
                // karena batu i memiliki nomor yang lebih kecil dari batu selanjutnya.
                if (current.profit > best.profit) {
                    best = current;
                    take[i][c] = true;
                } else if (current.profit == best.profit) {
                    if (current.weight <= best.weight) { // '<=' memastikan prioritas indeks kecil
                        best = current;
                        take[i][c] = true;
                    }
                }
            }
            dp[i][c] = best;
        }
    }

    // Cari kapasitas minimum 'best_c' yang menghasilkan keuntungan maksimum di dp[1]
    int best_c = 0;
    for (int c = 0; c <= n; c++) {
        if (dp[1][c] > dp[1][best_c]) {
            best_c = c;
        }
    }

    // Backtracking ke depan untuk mencetak item yang diambil
    int curr_c = best_c;
    for (int i = 1; i <= k; i++) {
        if (take[i][curr_c]) {
            std::cout << i << '\n';
            curr_c -= w[i];
        }
    }

    return 0;
}