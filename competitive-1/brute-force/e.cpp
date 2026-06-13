#include <bits/stdc++.h>
using namespace std;

int m, n, t;

int grid[25][25];
bool visited[25][25];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void resetVisited() {
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      visited[i][j] = false;
    }
  }
}

void search(int x, int y, int c) {
  if(x >= 0 && x < m && y >= 0 && y < n) {
    if(!visited[x][y]) {
      if(grid[x][y] == c) {
        t++;
        visited[x][y] = true;

        for(int i = 0; i < 4; i++) {
          search(x + dx[i], y + dy[i], c);
        }
      }
    }
  }
}

int main() {
  t = 0;

  cin >> m >> n;

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      cin >> grid[i][j];
      visited[i][j] = false;
    }
  }

  int ans = -1e9;
  
  for(int x = 0; x < m; x++) {
    for(int y = 0; y < n; y++) {
      t = 0;
      resetVisited();
      search(x, y, grid[x][y]);
      ans = max(ans, t*(t-1));
    }
  }

  cout << ans << '\n';

  return 0;
}

