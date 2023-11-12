#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    set<int> set;
    int n;
    int cnt = 1;

    while(cin >> n){
        set.insert(n);
        if(set.size() != cnt){
            cout << cnt;
            return 0;
        }
        ++cnt;
    }
    cout << -1;
}