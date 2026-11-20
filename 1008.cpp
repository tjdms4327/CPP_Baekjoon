// 두 정수 A와 B를 입력받은 다음, A/B 출력
// 절대오차 또는 상대오차가 10-9 이하

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a; 
    double b;
    cin >> a >> b;

    cout << fixed << setprecision(12) << a / b << '\n'; // 소수점 아래 12자리까지

    return 0;
}