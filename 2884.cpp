// 알람 시계
// 45분 일찍 알람 설정

#include <iostream>

using namespace std;

int main(){
    int h, m;
    cin >> h >> m;

    m -= 45;
    if (m < 0){
        m += 60;
        h--;
        if (h<0) h += 24;
    }


    cout << h << ' ' << m << '\n';

    return 0;
}
