#include <iostream>
#include <string>
using namespace std;

string realNameArr[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
string nickNameArr[] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
int realNameSize = sizeof(realNameArr) / sizeof(realNameArr[0]);
int nickNameSize = sizeof(nickNameArr) / sizeof(nickNameArr[0]);

bool findName(string input){
    for(int i = 0 ; i < realNameSize ; ++i){

        if(input == realNameArr[i]){

            cout << nickNameArr[i] << endl;
            return true;
        }
    }

    for(int i = 0 ; i < nickNameSize ; ++i){

        if(input == nickNameArr[i]){

            cout << realNameArr[i] << endl;
            return true;
        }
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; ++i){

        string input;
        cin >> input;

        if(findName(input) == false){
            
            cout << "Not found" << endl;
        }
    }

    return 0;
}