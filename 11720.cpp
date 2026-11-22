// 숫자의 합

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int tot = 0;
    for (int i=0; i<n; i++){
        tot += s[i] - '0';
    }

    cout << tot << '\n';

    return 0;
}