#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int road[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> road[i];
    }

    int road_highest_left[n];
    int road_highest_right[n];
    int highest_left = 0;
    int highest_right = 0;

    for(int i = 0 ; i < n ; ++i){
        road_highest_left[i] = highest_left;
        //cout << road_highest_left[i]<<endl;
        if(road[i] > highest_left){
            highest_left = road[i];
        }
    }

    for(int i = n-1 ; i >= 0 ; --i){
        road_highest_right[i] = highest_right;
        //cout << road_highest_right[i]<<endl;
        if(road[i] > highest_right){
            highest_right = road[i];
        }
    }

    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        int temp = min(road_highest_left[i] , road_highest_right[i]) - road[i];
        if(temp > 0){
            sum += temp;
        }
    }

    cout << sum;
    
    return 0;
}