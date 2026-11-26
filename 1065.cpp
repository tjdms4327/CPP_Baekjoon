// 문제 - 한수 
// 알고리즘 - 브루트포스
// 시간복잡도 - O(n)
// 공간복잡도 - O(1)

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = min(99, n); // 한 자리~두자리 수는 무조건 한수
    for (int i=100; i<=n; i++){
        if (i%10 + i/100 == 2*((i/10)%10)) count++;
    }

    cout << count << '\n';

    return 0;
}