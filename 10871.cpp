// X보다 작은 수

#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int a;
    for (int i = 0; i<n; i++){
        cin >> a;

        if (a < x) cout << a << ' ';
    }
    cout << '\n';

    return 0;
}
