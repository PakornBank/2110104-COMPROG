#include <iostream>
#include <vector>
#include <deque>
#include <string>

using namespace std;

void insertNum(deque<int> &numDeque , int num , bool &isFront){
    if(isFront){
        numDeque.push_front(num);
    }
    else{
        numDeque.push_back(num);
    }
    isFront = !isFront;
}

int main(){
    int n;
    deque<int> numDeque;
    cin >> n;
    bool isFront = false;
    
    int num = 0;
    while(cin >> num){
        if(num == -1) break;
        insertNum(numDeque , num , isFront);
    }
    
    cout << "[";
    int size = numDeque.size();
    for(int i = 0 ; i < size ; ++i){
        cout << numDeque[i];
        if(i != size - 1){
            cout << ", ";
        }
    }
    cout << "]";

    return 0;
}