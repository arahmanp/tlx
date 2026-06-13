#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

typedef vector<bool> vb;
typedef vector<vb> vvb;

typedef pair<int,int> ii;
typedef vector<ii> vii;

int m, n;

vi dx = {-1, 0, 1, 0};
vi dy = {0, 1, 0, -1};

vector<vii> generateAllCC(const vvi& grid) {
  vector<vii> ans;
  vvb visited(m, vb(n, false));

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      if(!visited[i][j] && grid[i][j] != 0) {
        queue<ii> q;
        ii initialNode = {i, j};
        q.push(initialNode);
        visited[i][j] = true;
        vii cc;
        cc.push_back({i, j});

        while(!q.empty()) {
          ii curNode = q.front();
          q.pop();

          for(int k = 0; k < 4; k++) {
            int adjX = curNode.first + dx[k];
            int adjY = curNode.second + dy[k];

            if(adjX >= 0 && adjX < m && adjY >= 0 && adjY < n) {
              if(!visited[adjX][adjY]) {
                if(grid[adjX][adjY] == grid[curNode.first][curNode.second]) {
                  q.push({adjX, adjY});
                  visited[adjX][adjY] = true;
                  cc.push_back({adjX, adjY});
                }
              }
            }
          }
        }

        if(cc.size() > 1) ans.push_back(cc);
      }
    }
  }

  return ans;
}

vvi collaps(const vvi& grid, vii cc) {
  vvi ans = grid;

  for(auto [x, y] : cc) {
    ans[x][y] = 0;
  }

  for(int j = 0; j < n; j++) {
    vi balls;

    for(int i = 0; i < m; i++) {
      if(ans[i][j] != 0) {
        balls.push_back(ans[i][j]);
      }
    }

    int idx = balls.size() - 1;

    for(int i = m - 1; i >= 0; i--) {
      ans[i][j] = (idx >= 0) ? balls[idx--] : 0;
    }
  }
  
  return ans;
}

int main() {
  cin >> m >> n;

  vvi grid(m, vi(n));

  for(int i = 0; i < m; i ++) {
    for(int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  vector<vii> cc = generateAllCC(grid);

  int ans = 0;

  for(auto c : cc) {
    int score1 = c.size() * (c.size() - 1);

    ans = max(ans, score1);

    vvi newGrid = collaps(grid, c);

    vector<vii> newCC = generateAllCC(newGrid);

    for(auto newC : newCC) {
      int score2 = newC.size() * (newC.size() - 1);

      ans = max(ans, score1 + score2);
    }
  }

  cout << ans << '\n';

  return 0;
}
