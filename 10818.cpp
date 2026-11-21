// 최소, 최대

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a;
    int minA = 1000001, maxA = -1000001;
    for (int i=0; i<n; i++){
        cin >> a;

        minA = min(minA, a);
        maxA = max(maxA, a);
    }

    cout << minA << ' ' << maxA << '\n';

    return 0;
}
