#include <bits/stdc++.h>

using namespace std;

int main(){
    string id;
    string grade;
    vector<pair<string , string>> student;
    while(true){
        cin >> id;
        if(id == "q"){
            break;
        }
        cin >> grade;
        student.push_back({id , grade});
    }

    
    map<string , string> increase { make_pair("A","A"),
                                    make_pair("B+","A"),
                                    make_pair("B","B+"),
                                    make_pair("C+","B"),
                                    make_pair("C","C+"),
                                    make_pair("D+","C"),
                                    make_pair("D","D+"),
                                    make_pair("F","D") };

    while(cin >> id){
        for(auto itr = student.begin() ; itr != student.end() ; ++itr){
            if(itr->first == id){
                itr->second = increase[itr->second];
                break;
            }
        }
    }

    for(auto itr = student.begin() ; itr != student.end() ; ++itr){
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}  