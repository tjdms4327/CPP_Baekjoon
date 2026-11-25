// 문제 - 분해합 
// 알고리즘 - 브로트포스
// 시간복잡도 - O(log n)
// 공간복잡도 - O(1)

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool find = false;
    for (int i=max(n-63, 1); i<= n; i++){ // 자리수의 합은 최대 9*7 = 63게
        int sum = i;
        int temp = i;

        while (temp){ // 자릿수 계산은 O(lon n)
            sum += temp %10;
            temp /= 10;
        }

        if (sum == n){
            cout << i << '\n';
            find = true;
            break;
        }
    }

    if (!find) cout << 0 << '\n';

    return 0;
}