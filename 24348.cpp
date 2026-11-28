// 문제 - ИЗРАЗ
// 알고리즘 - 브루트포스
// 시간복잡도 - O(1)
// 공간복잡도 - O(1)

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int num[3] = {a, b, c};
    sort(num, num+3);

    char op[3] = {'+', '-', '*'};

    long long ans = LLONG_MIN;

    do {
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (i == j) continue;

                long long result;

                if (op[i] == '*'){
                    result = 1LL * num[0] * num[1];

                    if (op[j] == '+')
                        result += num[2];
                    else
                        result -= num[2];
                }
                else if (op[j] == '*'){
                    result = 1LL * num[1] * num[2];

                    if (op[i] == '+')
                        result += num[0];
                    else
                        result -= num[0];
                }
                else {
                    result = num[0];

                    if (op[i] == '+')
                        result += num[1];
                    else
                        result -= num[1];

                    if (op[j] == '+')
                        result += num[2];
                    else
                        result -= num[2];
                }

                ans = max(ans, result);
            }
        }
    } while (next_permutation(num, num+3));

    cout << ans << '\n';

    return 0;
}
