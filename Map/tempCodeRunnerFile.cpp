#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , set<string>> map;
    string st1,st2;
    while(cin >> st1){
        if(cin >> st2){
            map[st1].insert(st2);
            map[st2].insert(st1);
        }
        else{
            set<string> set;
            for(string it : map[st1]){
                set.insert(it);
                for(string it2 : map[it]){
                    set.insert(it2);
                }
            }
            for(string it : set){
                cout << it << endl;
            }
        }
    }
}