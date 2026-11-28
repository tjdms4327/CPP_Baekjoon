// 문제 - 최대공약수와 최소공배수
// 알고리즘 - 구현
// 시간복잡도 - O(log(min(n, m)))
// 공간복잡도 - O(1)

#include <iostream>
#include <numeric>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    cout << gcd(n, m) << '\n';
    cout << lcm(n, m) << '\n';

    return 0;
}