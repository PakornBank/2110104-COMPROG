#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> fee;
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; ++i){
        string str;
        int cost;
        cin >> str;
        cin >> cost;
        fee[str] = cost;
    }

    string path;
    cin.ignore();
    getline(cin,path);

    int length = path.length();
    int output = 0;
    string prev = path.substr(4,2);

    for(int i = 0 ; i < length ; i += 7){

        string temp = path.substr(i+4,2);

        if(prev != temp){
            output += fee[temp];
            prev = temp;
        }
    }

    cout << output;
    
    return 0;
}