// 문제 - 제로 
// 알고리즘 - 구현, 스택
// 시간복잡도 - O(k)
// 공간복잡도 - O(k)

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<int> v;
    for (int i=0; i<k; i++){
        int x;
        cin >> x;

        if (x!=0) v.push_back(x);
        else v.pop_back();
    }

    long long sum = accumulate(v.begin(), v.end(), 0LL);
    cout << sum << '\n';

    return 0;
}