// 문제 - 1로 만들기
// 알고리즘 - dp
// 시간복잡도 - O(n)
// 공간복잡도 - O(n)

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
    dp[n] = 0;
    
    for (int i = n; i>0; i--){
        dp[i-1] = min(dp[i-1], dp[i]+1);

        if (i%3==0 && i/3>0){
            dp[i/3] = min(dp[i/3], dp[i]+1);
        }
        if (i%2==0 && i/2>0){
            dp[i/2] = min(dp[i/2], dp[i]+1);
        }
    }

    cout << dp[1] << '\n';

    return 0;
}