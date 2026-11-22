// 알파벳 찾기

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    vector<int> v(26, -1);
    for (size_t i=0; i<s.size(); i++){
        int idx = s[i] - 'a'; //현재 알파벳의 v에서의 idx

        if (v[idx] == -1) v[idx] = i;
    }

    for (int i=0; i<26; i++){
        cout << v[i] << " ";
    }
    cout << '\n';


    return 0;
}