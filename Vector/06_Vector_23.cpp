#include <iostream>
#include <vector>
#include <cmath>
#include <tuple>

using namespace std;

void insort(vector<tuple<double,int,double,double>> &vec , tuple<double,int,double,double> tup){
    int left = 0;
    int right = vec.size();
    int mid;
    while(left < right){
        mid = (left + right - 1) / 2;
        if( get<0>(tup) < get<0>(vec[mid]) ){
            right = mid;
        }
        else if( get<0>(tup) > get<0>(vec[mid])){
            left = mid + 1;
        }
        else left = right = mid;
    }
    vec.insert(vec.begin() + left, tup);
}

int main(){
    vector<tuple<double,int,double,double>> vec; 
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        double x;
        double y;
        cin >> x >> y;
        double dis = sqrt( pow(x,2) + pow(y,2) );
        tuple<double,int,double,double> tup (dis , i+1 , x ,y);
        insort(vec, tup);
    }
    cout << "#" << get<1>(vec[2]) << ": (" << get<2>(vec[2]) << ", " << get<3>(vec[2]) << ")";
    return 0;
}