// 문제 - 바이러스 
// 알고리즘 - DFS
// 시간복잡도 - O(n+m)
// 공간복잡도 - O(n+m)

#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[101];
bool visited[101] = {false};

void dfs(int x){ // dfs는 시간복잡도 O(n+m)
    visited[x] = true;

    for (int next : graph[x]){
        if (!visited[next]) dfs(next);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m; // 컴퓨터 수, 연결 쌍 수

    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    int connected = 0;
    for (int i=2; i<=n; i++){
        if (visited[i]){
            connected++;
        }
    }

    cout << connected << '\n';

    return 0;
}