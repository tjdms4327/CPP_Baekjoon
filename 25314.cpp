// 문제 - 코딩은 체육과목 입니다
// 알고리즘 - 구현
// 시간복잡도 - O(n)
// 공간복잡도 - O(1)

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i<n/4; i++){
        cout << "long ";
    }
    cout << "int\n";


    return 0;
}