#include <bits/stdc++.h>
using namespace std;

int main(){
    string cartoon , animal;
    map<string, vector<string>> map;
    vector<string> order;

    while(cin >> cartoon){
        cin >> animal;
        if(map[animal].size() == 0){
            map[animal] = {cartoon};
            order.push_back(animal);
        }
        else{
            map[animal].push_back(cartoon);
        }
    }

    for(auto animal : order){
        cout << animal << ": ";
        for(auto itr : map[animal]){
            cout << itr << " ";
        }
        cout << endl;
    }
    
}