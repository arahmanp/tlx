#include <bits/stdc++.h>
using namespace std;

int m, n, t;

int grid[25][25];
bool visited[25][25];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

typedef pair<int,int> ii;
typedef vector<ii> vii;

vii cells;

void resetVisited() {
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      visited[i][j] = false;
    }
  }
}

void search(int x, int y, int c, vii& cellsList) {
  if(x >= 0 && x < m && y >= 0 && y < n) {
    if(!visited[x][y]) {
      if(grid[x][y] == c) {
        t++;
        visited[x][y] = true;
        cellsList.push_back({x, y});

        for(int i = 0; i < 4; i++) {
          search(x + dx[i], y + dy[i], c, cellsList);
        }
      }
    }
  }
}

void collapse() {
  for(int i = m - 2; i >= 0; i--) {
    for(int j = 0; j < n; j++) {
      if(grid[i][j] != 0) {
        int row = i;

        while(row != m - 1 && grid[row + 1][j] == 0) {
          swap(grid[row][j], grid[row + 1][j]);
          row++;
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
      vii tmp;

      resetVisited();

      search(x, y, grid[x][y], tmp);

      int point = t * (t - 1);
      
      if(point > ans) {
        ans = point;
        cells = tmp;
      }
    }
  }

  for(auto [x, y] : cells) {
    grid[x][y] = 0;
  }

  collapse();

  cout << '\n';

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      if(grid[i][j] == 0) {
        cout << '.' << ' ';
      } else {
        cout << grid[i][j] << ' ';
      }
    }
    cout << '\n';
  }

  return 0;
}

