// 문제 - 피보나치 수 5
// 알고리즘 - dp
// 시간복잡도 - O(n)
// 공간복잡도 - O(n)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> dp(n+1, 0);
    if (n>=1) dp[1] = 1;
    for (int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << '\n';

    return 0;
}