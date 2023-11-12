#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, vector<string>> map0; // location each id go
    map<string, vector<string>> map1; // id in each location

    int n;
    cin >> n;

    for(int i = 0 ; i < n ; ++i){
        string id, lo;
        cin >> id;
        string idx = ((char)('0' + i)) + id;
        while(cin >> lo){
            if(lo == "*") break;
            map1[lo].push_back(idx);
            map0[id].push_back(lo);
        }
    }

    string find;
    cin >> find;
    set<string> set;

    for(string it : map0[find]){
        for(string it2 : map1[it]){
            set.insert(it2);
        }
    }
    if(set.size() < 2){
        cout << ">> Not Found";
        return 0;
    }
    for(auto it : set){
        if(it.substr(1) != find){
            cout << ">> " << it.substr(1) << endl;
        }
        
    }


}
    
