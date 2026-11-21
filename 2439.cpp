// 별 찍기 - 2

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << string(n-i, ' ') << string(i, '*') << '\n';
    }

    return 0;
}
