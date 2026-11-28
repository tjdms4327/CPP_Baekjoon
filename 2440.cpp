// 문제 - 별 찍기 - 3
// 알고리즘 - 구현
// 시간복잡도 - O(n^2)
// 공간복잡도 - O(n)

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        string s = string(n-i+1, '*');
        cout << s << '\n';
    }

    return 0;
}