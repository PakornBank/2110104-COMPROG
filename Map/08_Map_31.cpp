#include <bits/stdc++.h>
using namespace std;

int main(){
    map<double , pair<string , vector<string> > > score;
    map<string , string> chosen;
    map<string , int> div;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        string str;
        int rec;
        cin >> str >> rec;
        div.insert({str,rec});
    }
    cin >> n;
    for(int i = 0 ; i < n ; ++i ){
        string id;
        double point;
        string r1,r2,r3,r4;
        cin >> id >> point >> r1 >> r2 >> r3 >> r4;
        score.insert({-point, {id,{r1,r2,r3,r4}}});
    }

    for(auto itr : score){
        for(string sub : itr.second.second){
            if(div[sub] > 0){
                chosen.insert({itr.second.first,sub});
                --div[sub];
                break;
            }
        }
    }

    for(auto itr : chosen){
        cout << itr.first << " " << itr.second << endl;
    }


}