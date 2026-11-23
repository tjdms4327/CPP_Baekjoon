// 설탕 배달

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    const int INF = 1e9;
    vector<int> dp(n+1, INF);
    dp[0] = 0;

    for (int i = 1; i <= n ; i++){
        if (i>=3 && dp[i-3]!=INF){
            dp[i] = min(dp[i-3] + 1, dp[i]);
        }
        if (i>=5 && dp[i-5]!=INF){
            dp[i] = min(dp[i-5] + 1, dp[i]);
        }

    }

    if (dp[n]==INF) dp[n] = -1;
    cout << dp[n] << '\n';

    return 0;
}