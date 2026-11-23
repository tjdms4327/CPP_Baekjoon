// OX퀴즈

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    for (int i=0; i<t; i++){
        string s;
        cin >> s;

        int score = 0;
        int add = 0;
        for (size_t idx=0; idx<s.size(); idx++){
            if (s[idx]=='O') add++;
            else add = 0;

            score += add;
        }
        
        cout << score << '\n';
    }

    return 0;
}