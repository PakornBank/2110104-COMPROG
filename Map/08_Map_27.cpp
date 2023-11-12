#include<iostream>
#include<vector>
#include<map>
#include<sstream>
#include<bits/stdc++.h>

using namespace std;



int main(){
    map<char,string> t2k = { {'a',"2"}, {'b',"22"}, {'c',"222"}, {'d',"3"}, {'e',"33"}, {'f',"333"}, {'g',"4"}, {'h',"44"}, {'i',"444"}, {'j',"5"}, {'k',"55"}, {'l',"555"}, {'m',"6"}, {'n',"66"}, {'o',"666"}, {'p',"7"}, {'q',"77"}, {'r',"777"}, {'s',"7777"}, {'t',"8"}, {'u',"88"}, {'v',"888"}, {'w',"9"}, {'x',"99"}, {'y',"999"}, {'z',"9999"}, {' ',"0"} };
    
    string command;

    while(getline(cin,command)){
        stringstream ss(command);
        string word;
        getline(ss,word,' ');
        //cout << word << endl;

        cout << ">> ";

        if(word == "T2K"){
            string str;
            getline(ss,str);
            //cout << str;
            for(char c : str){
                cout << t2k[tolower(c)] + " ";
            }
            cout << endl;
            continue;
        }
        
        if(word == "K2T"){
            string str;
            getline(ss,str);
            //cout << str;
            string temp = "";
            for(char c : str){
                if(c == ' '){
                    for(auto it = t2k.begin(); it != t2k.end(); it++){
                        if(it->second == temp){
                            cout << it->first;
                            break;
                        }
                    }
                    temp = "";
                }
                else{
                    temp += c;
                }
            }
            for(auto it = t2k.begin(); it != t2k.end(); it++){
                if(it->second == temp){
                    cout << it->first;
                    break;
                }
            }
            cout << endl;
            continue;
        }
    }
    return 0;
}