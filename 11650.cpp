// 문제 - 좌표 정렬하기
// 알고리즘 - 정렬
// 시간복잡도 - O(n log n)
// 공간복잡도 - O(n)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }

    sort(v.begin(), v.end(), compare);

    for (int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }

    return 0;
}