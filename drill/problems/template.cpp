#include <bits/stdc++.h>

using namespace std;

// --- TYPEDEFS ---
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// --- MACROS ---
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

// --- LOOPING MACROS ---
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) for (int i = 0; i < (a); ++i)
#define FORd(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; --i)
#define trav(a, x) for (auto& a : x)

// --- CONSTANTS ---
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1.0);

// --- FAST I/O ---
void setIO(string name = "") {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

// --- SOLVE FUNCTION ---
void solve() {
    // Tulis logic soal di sini
    
}

int main() {
    setIO();
    
    int t = 1;
    // cin >> t; // Uncomment jika soal memiliki multiple test cases
    while (t--) {
        solve();
    }
    
    return 0;
}