#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, double> cur;
    cur.insert({"THB",1});
    for(int i = 0 ; i < n ; ++i){
        string curr;
        double val;
        cin >> curr >> val;
        cur.insert({curr,val});
    }
    
    cin.ignore();
    string str;
    getline(cin,str);
    stringstream ss(str);
    double total;
    ss >> total;
    string convertTo;
    ss >> convertTo;
    cout << total << " " << convertTo;
    total *= cur[convertTo];
    
    while(ss>>convertTo){
        total = floor(total / cur[convertTo]);
        cout << " -> " << (int)total << " " << convertTo;
        total *= cur[convertTo];
    }
     
}