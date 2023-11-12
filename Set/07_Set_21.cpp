#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;

    set<int> set;

    int n;
    while(cin >> n){
        set.insert(n);
    }

    int out = 0;
    auto curBack = set.end();
    --curBack;

    auto itr = set.begin();
    while(*itr <= k/2){
        auto back = curBack;
        while(*back > k/2){
            if(*itr + *back >=k){
                curBack = back;
            }
            if(*itr + *back == k){
                ++out;
                break;
            }
            if(*itr + *back < k){
                break;
            }
            
            --back;
        }
        ++itr;
    }

    cout << out;
}