#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , string> map;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; ++i){
        string str;
        getline(cin,str);
        stringstream ss(str);
        string name,number,tmp;
        ss >> name;
        ss >> tmp;
        name += " " + tmp;
        ss >> number;

        map.insert({name, number});
        map.insert({number, name});

    }

    cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; ++i){
        string str;
        getline(cin,str);
        cout << str << " --> ";
        if(map[str] != ""){
            cout << map[str];
        }
        else cout << "Not found";
        
        cout << endl;
    }
}