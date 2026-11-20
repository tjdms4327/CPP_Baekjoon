// 두 정수 A와 B가 주어졌을 때, A와 B 비교

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if (a > b) cout << ">\n";
    else if (a < b) cout << "<\n";
    else cout << "==\n";

    return 0;
}