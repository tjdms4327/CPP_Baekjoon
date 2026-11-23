// 문제 - 킹, 퀸, 룩, 비숍, 나이트, 폰
// 알고리즘 - 구현
// 시간복잡도 - O(1)
// 공간복잡도 - O(1)

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;

    cout << 1-king << " " << 1-queen << " " << 2 - rook << " " << 2-bishop << " " << 2-knight << " " << 8-pawn << '\n';

    return 0;
}