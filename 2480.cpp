// 주사위 세개

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());

    if (v[0]==v[2]) cout << 10000+v[0]*1000 << '\n';
    else if (v[0]==v[1] || v[1]==v[2]) cout << 1000+v[1]*100 << '\n';
    else cout << v[2]*100 << '\n';

    return 0;
}