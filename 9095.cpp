// 문제 - 1, 2, 3 더하기
// 알고리즘 - dp
// 시간복잡도 - O(tn)
// 공간복잡도 - O(n)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i=0; i<t; i++){
        int n;
        cin >> n;

        vector<int> dp(12, 0);
        dp[1] = 1; dp[2] = 1+1; dp[3] = 1+2+1;
        for (int x=4; x<=n; x++){
            dp[x] = dp[x-1] + dp[x-2] + dp[x-3];
        }

        cout << dp[n] << '\n';
    }

    return 0;
}