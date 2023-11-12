#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int range = n*n;
    int arr[range];
    
    for(int i = 0 ; i < range ; ++i){
        cin >> arr[i];
    }

    int inversion = 0;
    int zero_row = 0;

    for(int i = 0 ; i < range ; i++ ){

        if( arr[i] == 0 ){
            zero_row = i / n;
            continue;
        }

        for(int j = i + 1 ; j < range ; ++j ){
            if( arr[j] == 0){
                continue;
            } 
            if(arr[i] > arr[j]){
                ++inversion;
            }
        }
    }

    if((n % 2 == 1 && inversion % 2 == 0) ||
       (n % 2 == 0 && inversion % 2 == 1 && zero_row % 2 == 0) ||
       (n % 2 == 0 && inversion % 2 == 0 && zero_row % 2 == 1)){
            cout << "YES";
       }
    else cout << "NO";

    return 0;
}