// 문제 - 과제 안 내신 분..?
// 알고리즘 - 구현
// 시간복잡도 - O(1)
// 공간복잡도 - O(1)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<bool> visited(31, false);
    int n;
    for (int i=0; i<28; i++){
        cin >> n;
        visited[n] = true;
    }

    for (int i=1; i<=30; i++){
        if (!visited[i]) cout << i << '\n';
    }

    return 0;
}