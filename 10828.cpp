// 스택

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<int> s;
    for (int i=0; i<n; i++){
        string cmd;
        cin >> cmd;

        if (cmd=="push"){
            int x;
            cin >> x;
            s.push(x);
        } 
        else if (cmd=="pop"){
            if (!s.empty()) {
                cout << s.top() << '\n';
                s.pop();
            } 
            else cout << -1 << '\n';
        } 
        else if (cmd=="size") cout << s.size() << '\n';
        else if (cmd=="empty"){
            if (s.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else { // top
            if (s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        }

    }

    return 0;
}