#include <iostream>
#include <deque>
#include <utility>
#include <string>
#include <cmath>
using namespace std;

int main(){
    deque<pair<int,int>> q;

    q.push_front({0,0});

    int n; // command amount

    cin >> n;

    int startNum = 0; // initial number
    int currentCustomer;
    int currentTime;
    int qTime = 0;
    int done = 0;

    for(int i = 0 ; i < n ; ++i){
        string command; // command
        cin >> command;
        if(command == "reset"){
            int temp;
            cin >> temp;
            startNum += temp;
        }
        else if(command == "new"){
            int temp;
            cin >> temp;
            q.push_back({startNum,temp});
            cout << ">> ticket " << startNum << endl;
            ++startNum;
        }
        else if(command == "next"){
            q.pop_front();
            cout << ">> call " << q.front().first << endl;
        }
        else if(command == "order"){
            int temp;
            cin >> temp;
            cout << ">> qtime " << q.front().first << " " << temp - q.front().second << endl;
            qTime += temp - q.front().second;
            ++done;
        }
        else if(command == "avg_qtime"){
            double avg = (double)qTime/done;
            cout << ">> avg_qtime " << round(avg * 100.0)/100.0 << endl;
        }
    }
}

