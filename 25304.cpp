// 영수증

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int n;
    cin >> n;
    int a, b;
    for (int i=0; i<n; i++){
        cin >> a >> b;
        x -= a*b;
    }

    if (x==0) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
