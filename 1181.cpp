// 문제 - 단어 정렬
// 알고리즘 - 정렬
// 시간복잡도 - O(n lon n)
// 공간복잡도 - O(n)

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    if (a.size() != b.size()){
        return a.size() < b.size();
    }
    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    vector<string> words;
    for (int i=0; i<n; i++){
        cin >> s;
        words.push_back(s);
    }

    sort(words.begin(), words.end(), cmp);
    words.erase(unique(words.begin(), words.end()), words.end()); // 중복 정리 -> 중복 영역 삭제

    for (size_t i=0; i<words.size(); i++){
        cout << words[i] << '\n';
    }

    return 0;
}