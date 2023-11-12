#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    // จำนวน สส , คะแนน , ชื่อพรรค
    vector<tuple<double, unsigned int, string>> rank;

    double total = 0;

    string str;


    while(cin >> str){
        if(str == "END"){
            break;
        }
        unsigned int n;
        cin >> n;
        total += n;
        rank.push_back(make_tuple(n,-n,str));
    }  

    total /= 100;

    for(auto &it : rank){
        get<0>(it) /= total;
        get<0>(it) -= (int)get<0>(it) ;
        get<0>(it) *= -1;
    }

    sort(rank.begin(),rank.end());

    int hundred = 0;

    for(auto &it : rank){
        int temp = -get<1>(it) / total;
        get<0>(it) -= temp;
        hundred += temp;
    }
    int i = 0;
    while(hundred < 100){

        get<0>(rank[i]) = floor(get<0>(rank[i]));
        hundred += 1;
        ++i;
        
    }

    sort(rank.begin(),rank.end());
    i = 0;
    while(get<0>(rank[i]) <= -1){
        cout << get<2>(rank[i]) << " " << (int)get<0>(rank[i])*-1 << " " << -get<1>(rank[i]) << endl;
        ++i;
    }
}

/*
AA 100000
BB 120000
CC 170000
DD 550
EE 250000
FF 7000
GG 6300
END
*/