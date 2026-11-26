// 문제 - 문자열 
// 알고리즘 - 구현
// 시간복잡도 - O(t)
// 공간복잡도 - O(1)

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i=0; i<t; i++){
        string s;
        cin >> s;
        cout << s[0] << s[s.size()-1] << '\n';
    }

    return 0;
}