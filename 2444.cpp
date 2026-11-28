// 문제 - 별 찍기 - 7
// 알고리즘 - 구현
// 시간복잡도 - O(n^2)
// 공간복잡도 - O(n)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> reverse_bottom;
    for (int i = 1; i<=n; i++){
        string s = string(n-i, ' ') + string(2*i-1, '*');
        cout << s << '\n';

        if (i<n) reverse_bottom.push_back(s);
    }

    for (int i=n-2; i>=0; i--){
        cout << reverse_bottom[i] << '\n';
    }


    return 0;
}