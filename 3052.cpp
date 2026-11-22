// 나머지

#include <iostream>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    int a;
    for (int i=0; i<10; i++){
        cin >> a;
        s.insert(a%42);
    }

    cout << s.size() << '\n';

    return 0;
}