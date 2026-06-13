#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;

  cin >> n >> m >> k;

  string s[n], t[n];

  for(int i = 0; i < n; i++) cin >> s[i] >> t[i];

  unordered_set<string> topRank;
  unordered_set<string> hasGoldenTicket;
  vector<string> ans;

  for(int i = 0; i < m; i++) topRank.insert(t[i]);

  for(int i = m; i < n && ans.size() < k; i++) {
    if(topRank.count(t[i]) == 0 && hasGoldenTicket.count(t[i]) == 0) {
      ans.push_back(s[i]);
      hasGoldenTicket.insert(t[i]);
    }
  }

  cout << ans.size() << '\n';

  for(auto team : ans) cout << team << '\n';

  return 0;
}
