
// 문제 - 유기농 배추
// 알고리즘 - 그래프, BFS
// 시간복잡도 - O(m*n)
// 공간복잡도 - O(m*n)

#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

vector<string> ground;
int m, n;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void bfs(int x, int y){
    queue<pair<int, int>> q;

    q.push({x, y});
    ground[x][y] = '0';

    while (!q.empty()){
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        for (int i=0; i<4; i++){
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];

            if ((0 <= nx && nx < n && 0 <= ny && ny < m) 
            && (ground[nx][ny] == '1')){
                q.push({nx, ny});
                ground[nx][ny] = '0';
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i=0; i<t; i++){
        int k;
        cin >> m >> n >> k;

        ground.assign(n, string(m, '0'));

        for (int j=0; j<k; j++){
            int a, b;
            cin >> a >> b;

            ground[b][a] = '1';
        }

        int need = 0;

        for (int x=0; x<n; x++){
            for (int y=0; y<m; y++){
                if (ground[x][y] == '1'){
                    bfs(x, y);
                    need++;
                }
            }
        }

        cout << need << '\n';
    }

    return 0;
}
