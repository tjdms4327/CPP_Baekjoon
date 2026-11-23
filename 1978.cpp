// 소수 찾기

#include <iostream>

using namespace std;

bool isPrime(int num){
    if (num<2) return false;

    for (int i = 2; i*i <= num; i++){
        if (num%i==0) return false;
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x;
    int count_prime = 0;
    for (int i=0; i<n; i++){
        cin >> x;
        if (isPrime(x)) count_prime++;
    }

    cout << count_prime << '\n';

    return 0;
}
