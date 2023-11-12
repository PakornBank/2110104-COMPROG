#include<bits/stdc++.h>

using namespace std;

int main(){
    multiset<char> c1;
    multiset<char> c2;
    string str1, str2;

    getline(cin,str1);
    getline(cin,str2);

    for(char c : str1){
        if(c != ' '){
            c1.insert(tolower(c));
        }
    }

    for(char c : str2){
        if(c != ' '){
            c2.insert(tolower(c));
        }
    }

    if(c1 != c2){
        cout << "NO";
        return 0;
    }

    cout << "YES";

}