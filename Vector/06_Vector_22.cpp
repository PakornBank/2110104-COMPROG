#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector<int> num;

    while(cin >> n){
        num.push_back(n);
    }

    int size = num.size();
    int prev = num[0];
    int prevAt = 0;
    int max = 0;
    vector<vector<int>> data;
    for(int i = 1 ; i < size ; ++i){
        if(num[i] != prev){
            vector<int> temp;
            temp.push_back(prev);
            temp.push_back(prevAt);
            temp.push_back(i);
            data.push_back(temp);
            if(i - prevAt > max){
                max = i - prevAt;
            }
            prev = num[i];
            prevAt = i;
        }
    }
    vector<int> temp;
    temp.push_back(prev);
    temp.push_back(prevAt);
    temp.push_back(size);
    data.push_back(temp);
    if(size - prevAt > max){
        max = size - prevAt;
    }

    sort(data.begin() , data.end());

    for(auto x : data){
        if(x[2] - x[1] == max){
            cout << x[0] << " --> x[ " << x[1] << " : " << x[2] << " ]" << endl;
        }
    }
    return 0;

}

