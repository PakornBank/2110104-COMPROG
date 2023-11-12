#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int n;
    cin >> str >> n;
    char cur = str[0];
    int count = 0;
    int i = 0;
    for(; i < str.length() ; i++ ){
        if(str[i] == cur){
            ++count;
        }
        else{
            
            if(count >= n){
            str.erase(i-count,count);
            i-=count;
            }
            cur = str[i];
            count = 1;
        } 
    }
    if(count >= n){
        str.erase(i-count,count);
    }

    cout<<str;
    return 0;
}