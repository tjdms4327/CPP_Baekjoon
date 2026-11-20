// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        cout << string(i, '*') << '\n';
    }

    return 0;
}