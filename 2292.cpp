// 벌집

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int last = 1; // 현재 줄 마지막 방 번호
    int pass = 1;
    while (n > last) {
        last += pass*6;
        pass++;
    }

    cout << pass << '\n';

    return 0;
}