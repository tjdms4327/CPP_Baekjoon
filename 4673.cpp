// 문제 - 셀프 넘버
// 알고리즘 - 브루트포스
// 시간복잡도 - O(1)
// 공간복잡도 - O(1)

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    bool check[10001] = {false};
    for (int i=1; i<10001; i++){
        int sum = i;
        int temp = i;
        while (temp){
            sum += temp%10;
            temp /= 10;
        }

        if (sum<=10000) check[sum] = true;
    }

    for (int i=1; i<10001; i++){
        if (!check[i]) cout << i << '\n';
    }

    return 0;
}