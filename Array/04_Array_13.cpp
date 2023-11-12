#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int peak = 0;
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
        if(i > 1){
            if(arr[i-2] < arr[i-1] && arr[i-1] > arr[i]){
                ++peak;
            }
        }
    }
    cout << peak;
    return 0;
}