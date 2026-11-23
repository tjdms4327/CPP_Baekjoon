// 더하기 사이클

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cycle = 0;
    int cur = n;
    do {
        cur = (cur%10)*10 + (cur/10 + cur%10)%10;
        cycle++;
    } while (cur != n);

    cout << cycle << '\n';

    return 0;
}