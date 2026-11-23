// 단어 공부

#include <iostream>
#include <string>
#include <vector>
#include <cctype> // toupper()
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> count(26, 0);
    for (char c : s){
        char cur = toupper(c);
        int idx = cur - 'A';
        count[idx]++;
    }

    int max_count = -1;
    for (int cnt : count){
        max_count = max(max_count, cnt);
    }

    char ans = ' ';
    for (int i = 0; i<26; i++){
        if (count[i] == max_count){
            if (ans != ' '){
                ans = '?';
                break;
            } 
            ans = i + 'A';
        }
    }
    cout << ans << '\n';

    return 0;
}