// 문제 - 문자와 문자열
// 알고리즘 - 구현
// 시간복잡도 - O(1)
// 공간복잡도 - O(n)

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int i;
    cin >> s >> i;

    cout << s[i-1] << '\n';

    return 0;
}