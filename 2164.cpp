// 문제 - 카드2
// 알고리즘 - 큐
// 시간복잡도 - O(n)
// 공간복잡도 - O(n)

#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> q;
    for (int i=1; i<=n; i++){
        q.push(i);
    }

    while (q.size() > 1){
        q.pop(); // 첫 번째 값 제거

        int temp = q.front(); q.pop(); // 두 번째 값 뽑아오고 큐에서 제거
        q.push(temp); // 두 번째 값 맨 뒤에 추가
    }

    cout << q.front() << '\n';

    return 0;
}