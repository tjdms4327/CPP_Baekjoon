// 문제 - 다이얼
// 알고리즘 - 구현
// 시간복잡도 - O(n)
// 공간복잡도 - O(1)

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int time = 0;
    for (char c : s){
        int x = c - 'A';

        if (x <= 2) time += 3;
        else if (x < 6) time += 4;
        else if (x<9) time += 5;
        else if (x<12) time += 6;
        else if (x<15) time += 7;
        else if (x<19) time += 8;
        else if (x<22) time += 9;
        else time += 10;
    }

    cout << time << '\n';

    return 0;
}