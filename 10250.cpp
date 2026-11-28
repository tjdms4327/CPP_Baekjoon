// 문제 - ACM 호텔
// 알고리즘 - 
// 시간복잡도 - O()
// 공간복잡도 - O()

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    for (int i=0; i<t; i++){
        int h, w, n;
        cin >> h >> w >> n;

        int xx = (n-1)/h + 1;
        int yy = (n-1)%h + 1;

        cout << yy << setw(2) << setfill('0') << xx << '\n';
    }

    return 0;
}