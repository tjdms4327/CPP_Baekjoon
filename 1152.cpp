// 단어의 개수 

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string s;
    while (cin >> s){
        cnt++;
    }

    cout << cnt <<'\n';

    return 0;
}