#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005], originalGrid[1005][1005];
bool visited[1005][1005];
pair<int,int> parentPos[1005][1005];

int main()
{
    int n, m;
    cin >> n >> m;

    int startX = -1, startY = -1;
    int destX  = -1, destY  = -1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            originalGrid[i][j] = grid[i][j];
            if(grid[i][j] == 'R'){
                startX = i;
                startY = j;
            }
            if(grid[i][j] == 'D'){
                destX = i;
                destY = j;
            }
        }
    }

    if(startX == -1 || startY == -1 || destX == -1 || destY == -1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << originalGrid[i][j];
            }
            cout << "\n";
        }
        return 0;
    }

    memset(visited, false, sizeof(visited));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            parentPos[i][j] = {-1, -1};
        }
    }

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};

    queue<pair<int,int>> q;
    visited[startX][startY] = true;
    q.push({startX, startY});

    bool found = false;
    while(!q.empty()){
        auto [cx, cy] = q.front();
        q.pop();

        if(cx == destX && cy == destY){
            found = true;
            break;
        }

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                if(!visited[nx][ny] && (grid[nx][ny] == '.' || grid[nx][ny] == 'D')){
                    visited[nx][ny] = true;
                    parentPos[nx][ny] = {cx, cy};
                    q.push({nx, ny});
                }
            }
        }
    }

    if(!found){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << originalGrid[i][j];
            }
            cout << "\n";
        }
        return 0;
    }

    int cx = destX, cy = destY;
    while(!(cx == startX && cy == startY)) {
        auto [px, py] = parentPos[cx][cy];
        if(grid[cx][cy] != 'R' && grid[cx][cy] != 'D'){
            grid[cx][cy] = 'X';
        }
        cx = px;
        cy = py;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}