#include <iostream>
#include <string>

using namespace std;

int out[50];

int main(){
    string str;
    getline(cin,str);
    int length = str.length();
    
    for(int i = 0 ; i < length ; ++i){
        str[i] = tolower(str[i]);
    }

    for(int i = 0 ; i < length ; ++i){
        if(str[i] >= 'a' && str[i] <= 'z' ){
            out[str[i] - 'a'] += 1;
        }
    }

    for(int i = 0 ; i < 26 ; ++i){
        if(out[i] > 0){
            char temp = 'a' + i;
            cout << temp << " -> " << out[i] << endl;
        }
    }

    return 0;
}