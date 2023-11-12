#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];

    for(int i = 0 ; i < n ; ++i){
        cin >> arr1[i];
        cin >> arr2[i];
    }

    int min1 = arr1[0];
    int max1 = arr1[0];
    int min2 = arr2[0];
    int max2 = arr2[0];

    for(int i = 0 ; i < n ; ++i){
        
        if(i % 2 == 0){
            min1 = min(min1,arr1[i]);
            max1 = max(max1,arr1[i]);
            min2 = min(min2,arr2[i]);
            max2 = max(max2,arr2[i]);
        }
        else{
            min1 = min(min1,arr2[i]);
            max1 = max(max1,arr2[i]);
            min2 = min(min2,arr1[i]);
            max2 = max(max2,arr1[i]);
        }
    }

    string str;
    cin >> str;

    if(str == "Zig-Zag"){
        cout << min1 << " " << max2;
    }
    else{
        cout << min2 << " " << max1;
    }

    return 0;
}