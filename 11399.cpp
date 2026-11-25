// 문제 - ATM 
// 알고리즘 - 정렬
// 시간복잡도 - O(n lon n)
// 공간복잡도 - O(n)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long time = 0;
    for (int i=0; i<n; i++){
        time += v[i] * (n-i);
    }

    cout << time << '\n';

    return 0;
}