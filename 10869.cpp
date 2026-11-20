// 두 자연수 A와 B
// A+B, A-B, A*B, A/B(몫), A%B(나머지) 출력

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    cout << a + b << '\n';
    cout << a - b << '\n';
    cout << a * b << '\n';
    cout << a / b << '\n';
    cout << a % b << '\n';

    return 0;
}