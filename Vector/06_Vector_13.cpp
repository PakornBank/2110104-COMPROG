#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter){
    vector<string> vec;
    int len = line.length();
    string newString;
    for(int i = 0 ; i < len ; ++i){
        if(line[i] == delimiter){
            if(!newString.empty()) vec.push_back(newString);
            newString.clear();
        }
        else newString += line[i];
    }
    if(!newString.empty()) vec.push_back(newString);
    return vec;
}

int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for(string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}