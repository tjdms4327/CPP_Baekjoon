// 문제 - 평균은 넘겠지
// 알고리즘 - 구현
// 시간복잡도 - O(cn)
// 공간복잡도 - O(n)

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    cin >> c;

    for (int i=0; i<c; i++){
        int n;
        cin >> n;

        vector<int> score(n);
        int tot = 0;
        for (int j=0; j<n; j++){
            cin >> score[j];
            tot += score[j];
        }

        int count_over_avg = 0;
        for (int x : score){
            if (tot < x*n){
                count_over_avg++;
            }
        }

        cout << fixed << setprecision(3) << (float)count_over_avg / n * 100 << "%\n";

    }

    return 0;
}