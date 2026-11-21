// 최댓값

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    int idx = -1, maxVal = 0;
    for (int i=1; i<=9; i++){
        cin >> a;
        if (a > maxVal){
            idx = i;
            maxVal = a;
        }
    }

    cout << maxVal << '\n';
    cout << idx << '\n';

    return 0;
}
