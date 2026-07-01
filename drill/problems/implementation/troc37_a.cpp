#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>

int main() {
    std::vector<std::pair<int, char>> start_point(4), end_point(4);

    char parts[4] = {'b', 'd', 'g', 'v'};

    for(int i = 0; i < 4; i++) {
        std::cin >> start_point[i].first >> end_point[i].first;

        start_point[i].second = parts[i];
        end_point[i].second = parts[i];
    }

    std::unordered_set<char> playing;
    int solo_duration = 0;

    for(int i = 0; i <= 176; i++) {
        for(auto [s, c] : start_point) {
            if(i == s) playing.insert(c);
        }

        for(auto [e, c] : end_point) {
            if(i == e) playing.erase(c);
        }

        // std::cout << i << ": ";
        // for(auto el : playing) std::cout << el << ' ';
        // std::cout << '\n';

        if(playing.size() == 1 && playing.contains('g')) solo_duration++;
    }

    if(solo_duration != 0) {
        std::cout << "Guitar solo (" << solo_duration << " sec.)";
    } else {
        std::cout << "No guitar solo :(";
    }

    return 0;
}