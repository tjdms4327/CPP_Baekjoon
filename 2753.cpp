// 윤년이면 1, 아니면 0
// 윤년 : 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때

#include <iostream>

using namespace std;

int main(){
    int year;
    cin >> year;

    if ((year%4==0 && year%100!=0) || (year%400==0)) cout << "1\n";
    else cout << "0\n";

    return 0;
}