#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int rec[n][4];
    for(int i = 0 ; i < n ; ++i){
        cin >> rec[i][0] >> rec[i][1] >> rec[i][2] >> rec[i][3];
    }
    int maxi = 0;

    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){
                int x1 = max(rec[j][0],rec[i][0]);
                int y1 = max(rec[j][1],rec[i][1]);
                int x2 = min(rec[j][2],rec[i][2]);
                int y2 = min(rec[j][3],rec[i][3]);
                if(x1 < x2 && y1 < y2){
                    int area = abs((x2 - x1) * (y2 - y1));
                    maxi = max(maxi,area);
            }
        }        
    }

    if(maxi == 0 ){
        cout << "No overlaps";
        return 0;
    }

    cout << "Max overlapping area = " << maxi << endl;
    for(int i = 0 ; i < n ; ++i){
        for(int j = i + 1 ; j < n ; ++j){
                int x1 = max(rec[j][0],rec[i][0]);
                int y1 = max(rec[j][1],rec[i][1]);
                int x2 = min(rec[j][2],rec[i][2]);
                int y2 = min(rec[j][3],rec[i][3]);
                if(x1 < x2 && y1 < y2){
                    int area = abs((x2 - x1) * (y2 - y1));
                    if(area == maxi){
                        cout << "rectangles " << i << " and " << j << endl;
                }
            }
        }
    }
    return 0;
}