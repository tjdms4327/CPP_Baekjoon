// 상수 

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string ans = b;
    if (a > b) ans = a; // 둘이 자릿수 같으니 문자열 사전순 비교 가능

    cout << ans << '\n';

    return 0;
}