// 괄호

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

        int left = 0;
        bool isVPS = true;
        for (size_t idx=0; idx<s.size(); idx++){
            if (s[idx]=='(') left++;
            else left--;

            if (left<0) {
                isVPS = false;
                break;
            }
        }

        if (isVPS && left==0) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}
