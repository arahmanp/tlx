#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_set<ll> res;
string s;

void solve(int idx, ll cur_sum, ll cur_num, int sign) {
  if(idx == s.size()) {
    ll final_sum = cur_sum + (sign * cur_num);
    res.insert(final_sum);
    return;
  }

  int digit = s[idx] - '0';
  ll next_num = cur_num * 10 + digit;

  solve(idx + 1, cur_sum, next_num, sign);
  solve(idx + 1, cur_sum + (sign * cur_num), digit, 1);
  solve(idx + 1, cur_sum + (sign * cur_num), digit, -1);
}

int main() {
  cin >> s;

  int first = s[0] - '0';
  solve(1, 0, first, 1);

  cout << res.size() << '\n';

  return 0;
}
