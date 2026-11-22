// 오븐 시계

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m;
    int need; // 분 단위
    cin >> h >> m >> need;

    m += need;
    if (m >= 60){
        h += (m / 60);
        m %= 60;

        if (h > 23) h %= 24;
    }

    cout << h << " " << m << '\n';

    return 0;
}