#include <iostream>
#include <string>
using namespace std;

void cut(string card[], int length){

    int mid = length / 2;

    for(int i = 0 ; i < mid ; ++i){
        string temp = card[i];
        card[i] = card[mid + i];
        card[mid + i] = temp;
    }
}


void slice(string card[], int length){

    int mid = length / 2;
    string temp[mid];

    for(int i = 0 ; i < mid ; ++i){
        temp[i] = card[mid + i];
    }

    for(int i = mid - 1 ; i >= 0 ; --i){
        card[i * 2] = card[i];
        card[i * 2 + 1] = temp[i];
    }
}

int main(){
    int n;
    cin >> n;
    string card[n];

    for(int i = 0 ; i < n ; ++i){
        cin >> card[i];
    }

    string instruction;
    cin.ignore();
    getline(cin,instruction);
    int length = instruction.length();

    for(auto c : instruction){

        if(c == 'C'){
            cut(card,n);
        }

        else if(c == 'S'){
            slice(card,n);
        }

    }

    for(auto c : card){
        cout << c << " ";
    }

    return 0;

}