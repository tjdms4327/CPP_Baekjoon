// 팩토리얼

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int tot = 1;
    for (int i=2; i<=n; i++){ // n=0 or 1이면 무시 (팩토리얼 값 1)
        tot *= i;
    }

    cout << tot << '\n';

    return 0;
}
