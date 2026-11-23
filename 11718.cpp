// 문제 - 그대로 출력하기
// 알고리즘 - 구현
// 시간복잡도 - O(n)
// 공간복잡도 - O(1)

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (getline(cin, s)) {
        cout << s << '\n';
    }

    return 0;
}