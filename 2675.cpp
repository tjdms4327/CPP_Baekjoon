// 문자열 반복

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    int n;
    string s;
    for (int i=0; i<t; i++){
        cin >> n >> s;

        for (size_t idx=0; idx<s.size(); idx++){
            cout << string(n, s[idx]);
        }
        cout << '\n';
    }

    return 0;
}