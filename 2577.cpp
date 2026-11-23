// 숫자의 개수

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int product = a*b*c;
    string s_product = to_string(product);

    vector<int> count(10, 0);
    for (char c : s_product){
        count[c-'0']++;
    }

    for (int cnt : count){
        cout << cnt << '\n';
    }

    return 0;
}