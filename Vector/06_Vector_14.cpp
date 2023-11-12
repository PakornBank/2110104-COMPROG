#include <iostream>
#include <vector>

using namespace std;

void insort(vector<int> &vec , int x){
    int left = 0;
    int right = vec.size();
    int mid;
    while(left != right){
        mid = (left + right - 1) / 2;
        if(x == vec[mid]){
            left = right = mid;
        }
        else if(vec[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid;
        }

    }
    vec.insert(vec.begin() + left,x);
}

int main(){
    int n;
    vector<int> vec;
    while(cin >> n){
        insort(vec,n);   
    }

    int sum = 0;
    vector<int> newVec;
    for(int i = 1 ; i < vec.size() ; ++i){
        if(vec[i] != vec[i-1] ){
            ++sum;
            newVec.push_back(vec[i-1]);
        }
    }
    ++sum;
    newVec.push_back(vec.back());
    
    cout << sum << endl;
    for(int i = 0 ; i < 10 ; ++i){
        cout << newVec[i];
        if(i < 9){
            cout << " ";
        }
    }
    return 0;
}