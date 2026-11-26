// 문제 - 직사각형에서 탈출
// 알고리즘 - 구현
// 시간복잡도 - O(1)
// 공간복잡도 - O(1)

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int move = min({x-0, w-x, y-0, h-y}); // 경계선까지니까
    cout << move << '\n';

    return 0;
}