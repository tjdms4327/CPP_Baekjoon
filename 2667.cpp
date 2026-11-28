// 문제 - 단지번호붙이기
// 알고리즘 - 그래프, BFS
// 시간복잡도 - O(n^2 long n)   // 원소 개수는 n^2개
// 공간복잡도 - O(n^2)

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

vector<string> graph;
int n;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y){
    queue<pair<int, int>> q;

    q.push({x, y});
    graph[x][y] = '0'; // 방문 처리

    int cnt = 1;
    while (!q.empty()){
        int cur_x = q.front().first;
        int cur_y = q.front().second;
        q.pop();

        for (int i=0; i<4; i++){
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];

            if ((0<=nx && nx<n && 0<=ny && ny<n) && (graph[nx][ny]=='1')){
                q.push({nx, ny});
                cnt++;
                graph[nx][ny]='0';
            }
        }
    }

    return cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    graph.resize(n);
    for (int i=0; i<n; i++){
        cin >> graph[i];
    }

    vector<int> house;

    for (int x=0; x<n; x++){
        for (int y=0; y<n; y++){
            if (graph[x][y]=='1'){
                int count = bfs(x, y);
                house.push_back(count);
            }
        }
    }

    sort(house.begin(), house.end());

    cout << house.size() << '\n';
    for (int x : house){
        cout << x << '\n';
    }

    return 0;
}