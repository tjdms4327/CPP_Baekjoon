// 문제 - 동전 0
// 알고리즘 - 그리디
// 시간복잡도 - O(n)
// 공간복잡도 - O(n)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[n-i-1];
    }

    int coins = 0;
    for (int i=0; i<n; i++){
        if (k<=0) break;

        coins += k / v[i];
        k %= v[i];
    }

    cout << coins << '\n';

    return 0;
}