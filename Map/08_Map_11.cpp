#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, string> myMap;

    for(int i = 0 ; i < n ; ++i){
        string str1,str2;
        cin >> str1 >> str2;
        myMap.insert({str1,str2});
        myMap.insert({str2,str1});
    }

    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        string str;
        cin >> str;
        if(myMap[str] != ""){
            cout << myMap[str];
        }
        else cout << "Not found";

        cout << endl;
    }
}