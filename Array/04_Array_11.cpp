#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int len = str.length();

    bool num_found[10] = {false};
    for( int i = 0 ; i < len ; ++i){
        if(str[i] >= '0' && str[i] <= '9'){
            num_found[str[i] - '0'] = true;
        }
    }
    bool is_found = false ;
    for( int i = 0 ; i < 10 ; ++i ){
        if(num_found[i] == false){
            if(is_found){
                cout << ",";
            }
            cout << i;
            is_found = true;
        }
    }
    if(! is_found){
        cout << "None";
    }
    return 0;
}
