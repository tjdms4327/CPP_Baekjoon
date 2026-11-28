// 문제 - 수 정렬하기 3
// 알고리즘 - 정렬
// 시간복잡도 - O(n)
// 공간복잡도 - O(1)

#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count[10001] = {0};
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        count[x]++;
    }

    for (int i=1; i<10001; i++){
        int repeat = count[i];
        for (int j=0; j<repeat; j++){
            cout << i << '\n';
        }
    }

    return 0;
}