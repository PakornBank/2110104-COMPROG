#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> process;
    int n;
    cin >> n;
    process.push_back(n);
    while(n != 1){
        if(n % 2 == 0){
            n = n >> 1; 
        }
        else{
            n = 3 * n + 1;
        }
        process.push_back(n);
    }
    vector<int>::iterator itr;
    if(process.size() > 15){
        itr = process.end() - 15; 
    }
    else itr = process.begin();

    for(; itr != process.end() ; ++itr){
        cout << *itr;
        if(itr != process.end() - 1){
            cout << "->";
        }
    }
    return 0;
}