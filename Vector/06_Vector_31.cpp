#include <iostream>
#include <vector>
using namespace std;

int bingo(char c){
    switch(c){
        case 'B' :
            return 0;
        case 'I' :
            return 1;
        case 'N' :
            return 2;
        case 'G' :
            return 3;
        case 'O' :
            return 4;
    }
    return -1;
}

int main(){
    string str;
    char letter[] = {'B' , 'I' , 'N' , 'G' , 'O'};
    getline(cin,str);
    string arr[5][5] = {};
    bool isbingo[5][5] = {false};
    isbingo[2][2] = true;
    for(int i = 0 ; i < 5 ; ++i){
        for(int j = 0 ; j < 5 ; ++j){
            cin >> arr[i][j];
        }
    }
    string caller;
    int count = 1;
    while(cin >> caller){
        int column = bingo(caller[0]);
        for(int i = 0 ; i < 5 ; ++i){
            if(caller.substr(1) == arr[i][column]){
                isbingo[i][column] = true;
            }
        }
        bool hor = true;
        bool ver = true;
        bool end = false;
        for(int i = 0 ; i < 5 ; ++i){
            hor = true;
            for(int j = 0 ; j < 5 ; ++j){
                if(!isbingo[i][j] && hor){
                    hor = false;
                }
            }
            if(hor && end == false){
                cout << count << endl;
                end = true;
            }
            if(hor){
                cout << "B" << arr[i][0] << ", ";
                cout << "I" << arr[i][1] << ", ";
                if(i != 2){
                    cout << "N" << arr[i][2] << ", ";
                }
                cout << "G" << arr[i][3] << ", ";
                cout << "O" << arr[i][4] << endl;
            }
        }
        for(int i = 0 ; i < 5 ; ++i){

            bool ver = true;
            for(int j = 0 ; j < 5 ; ++j){

                if(!isbingo[j][i] && ver){
                    ver = false;
                }
            }
            if(ver && end == false){
                cout << count << endl;
                end = true;
            }

            if(ver){
                cout << letter[i] << arr[0][i] << ", ";
                cout << letter[i] << arr[1][i] << ", ";
                if(i != 2){
                    cout << letter[i] << arr[2][i] << ", ";
                }
                cout << letter[i] << arr[3][i] << ", ";
                cout << letter[i] << arr[4][i] << endl;
            }

        }

        bool diag = true;
        for(int j = 0 ; j < 5 ; ++j){

            if(!isbingo[j][j] && diag){
                diag = false;
            }
        }
        if(diag && end == false){
            cout << count << endl;
            end = true;
        }

        if(diag){
            cout << letter[0] << arr[0][0] << ", ";
            cout << letter[1] << arr[1][1] << ", ";
            cout << letter[3] << arr[3][3] << ", ";
            cout << letter[4] << arr[4][4] << endl;
        }

        diag = true;
        for(int j = 0 ; j < 5 ; ++j){

            if(!isbingo[4-j][j] && diag){
                diag = false;
            }
        }
        if(diag && end == false){
            cout << count << endl;
            end = true;
        }

        if(diag){
            cout << letter[0] << arr[4][0] << ", ";
            cout << letter[1] << arr[3][1] << ", ";
            cout << letter[3] << arr[1][3] << ", ";
            cout << letter[4] << arr[0][4] << endl;
        }

        if(end) return 0;
        
        ++count;
    }
    return 0;
}