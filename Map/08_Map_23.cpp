#include <bits/stdc++.h>
using namespace std;

int main(){
    string genre, time;
    map<string,int> map1;
    map<int,string> map2;

    while(cin >> genre){
        cin >> genre;
        cin >> genre;
        cin >> time;
        stringstream ss(time);
        string num;
        int time = 0;
        getline(ss , num , ':');
        time += stoi(num) * 60;
        getline(ss , num , ':');
        time += stoi(num);
        map1[genre] += time;
    }

    for(auto it : map1){
        map2.insert({-it.second,it.first});
    }
    int cnt = 0;
    for(auto it : map2){
        if(cnt == 3) break;
        cout << it.second << " --> " << -it.first/60 << ":" << -it.first%60 << endl;
        ++cnt;
    }
}