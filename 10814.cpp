// 문제 - 나이순 정렬
// 알고리즘 - 정렬
// 시간복잡도 - O(n log n)
// 공간복잡도 - O(n)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Member{ // 새 자료형 만들기
    int age;
    string name;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Member> v;
    for (int i=0; i<n; i++){
        int x;
        string s;
        cin >> x >> s;

        v.push_back({x, s});
    }

    stable_sort(v.begin(), v.end(),
        [](const Member& a, const Member& b){
            return a.age < b.age; // 정렬 기준
        }
    );  // 정렬 기준이 같은 값이면 기존 순서 유지


    for (int i=0; i<n; i++){
        cout << v[i].age << ' ' << v[i].name << '\n';
    }

    return 0;
}