// 평균

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<double> a(n);
    double maxVal = -1;
    double tot = 0.0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        maxVal = max(maxVal, a[i]);
        tot += a[i];
    }

    cout << fixed << setprecision(3) << (tot / maxVal * 100) / n << '\n';

    return 0;
}