// 문제 - 달팽이는 올라가고 싶다
// 알고리즘 - 
// 시간복잡도 - O()
// 공간복잡도 - O()

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, v;
    cin >> a >> b >> v;

    int day = (v-a + (a-b) - 1) / (a-b) + 1; // 올림 나눗셈

    cout << day << '\n';

    return 0;
}