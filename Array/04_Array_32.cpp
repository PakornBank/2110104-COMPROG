#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int lift[n][3];
    for(int i = 0 ; i < n ; i++){
        cin >> lift[i][0] >> lift[i][1] >> lift[i][2];
    }

    int question;
    cin >> question;
    int q[question][2];
    for(int i = 0 ; i < question ; i++){
        cin >> q[i][0] >> q[i][1];
    }

    for(int i = 0 ; i < question ; i++){
        int shortest = 1000000000;
        int min_num = 1000000;
        int direction_q = 0;
        int q_start = q[i][0];
        int q_dest = q[i][1];

        if(q_start < q_dest){
            direction_q = 1; //up
        }
        else{
            direction_q = -1; //down
        }

        for(int j = 0 ; j < n ; j++){
            int lift_start = lift[j][1];
            int lift_dest = lift[j][2];
            int direction_lift = 0;

            if(lift_start < lift_dest){
                direction_lift = 1;
            }
            else{
                direction_lift = -1;
            }

            int min_lift = min(lift_start,lift_dest);
            int max_lift = max(lift_start,lift_dest);

            if(direction_q != direction_lift || q_start < min_lift || q_start > max_lift ){

                int temp = abs( q_start - lift_dest ) + abs( q_dest - q_start);
                
                if(temp < shortest  || (temp == shortest && lift[j][0] < min_num) ){
                    shortest = temp;
                    min_num = lift[j][0];
                }
            }
            else{
                if(q_dest >= min_lift && q_dest <= max_lift){

                    int temp = 0;

                    if(temp < shortest  || (temp == shortest && lift[j][0] < min_num) ){
                        shortest = temp;
                        min_num = lift[j][0];
                    }   
                }
                else{
                    int temp = abs(q_dest - lift_dest);
                    
                    if(temp < shortest  || (temp == shortest && lift[j][0] < min_num) ){
                        shortest = temp;
                        min_num = lift[j][0];
                    }
                }
            }
            
        }

        cout << ">> " << min_num << endl;
    }
}