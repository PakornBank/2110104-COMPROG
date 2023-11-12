#include <bits/stdc++.h>

using namespace std;

int main(){
    set<string> win;
    set<string> lose;
    set<string> neverLose;

    string winner;
    string loser;

    while(cin >> winner){
        cin >> loser;
        win.insert(winner);
        lose.insert(loser);
    }

    set_difference(win.begin() , win.end() , lose.begin() , lose.end() , inserter(neverLose, neverLose.begin()) );

    if(neverLose.size() == 0){
        cout << "None";
    }
    else{
        for(auto it = neverLose.begin() ; it != neverLose.end() ; ++it){
            cout << *it << " ";
        }
    }
}