// 문제 - 소수 구하기
// 알고리즘 - 브루트포스, 소수 판정
// 시간복잡도 - O((n-m+1) * sqrt(n))
// 공간복잡도 - O(1)

#include <iostream>

using namespace std;

bool isprime(int x){
    for (int i=2; i*i<=x; i++){
        if (x%i==0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    for (int i=m; i<=n; i++){
        if (isprime(i)) cout << i << '\n';
    }

    return 0;
}