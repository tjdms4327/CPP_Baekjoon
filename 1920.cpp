// 문제 - 수 찾기 
// 알고리즘 - 해시
// 시간복잡도 - O(n+m)
// 공간복잡도 - O(n)

#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<int> s;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    int m;
    cin >> m;
    for (int i=0; i<m; i++){
        int x;
        cin >> x;
        
        cout << (s.find(x) != s.end() ? 1 : 0) << '\n';
    }


    return 0;
}