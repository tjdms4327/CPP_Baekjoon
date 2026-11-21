// ??!

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name;
    cin >> name;

    cout << name << "?""?!\n"; //trigraph ??!로 해석 방지

    return 0;
}
