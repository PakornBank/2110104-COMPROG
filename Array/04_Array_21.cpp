#include <iostream>
#include <iomanip>
using namespace std;

double fraction(double arr[] , int itr , int end){
    if(itr == end){
        return 1 / arr[itr];
    }
    return 1 / (arr[itr] + fraction(arr , itr + 1 , end));
}

int main(){
    int n;
    cin >> n;
    double arr[n];
   
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
        if(i > 0){
            cout << setprecision(10) << arr[0] + fraction(arr , 1 , i) << endl;
        }
        else cout << setprecision(10) << arr[0] << endl;
        
    }
    return 0;
}