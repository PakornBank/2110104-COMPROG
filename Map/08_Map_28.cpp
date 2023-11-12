#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    map<string,vector<string>> findArtist;

    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0 ; i < n ; ++i ){

        string str;
        getline(cin,str);

        int it = str.find(',');
        string song = str.substr(0,it);
        string artist = str.substr(it+2);
  
        findArtist[song].push_back(artist);
          
    }

    string songName;
    getline(cin,songName);

    int prev = 0;
    int count = 0;

    for(int i = 0 ; i < songName.length() ; ++i){

        if(songName[i] == ','){
            string song = songName.substr(prev,count);
            count = -2;
            prev = i + 2;
            cout << song  << " -> ";

            if(findArtist[song].size() != 0){
                
                for(auto str : findArtist[song]){

                    if(str != findArtist[song][findArtist[song].size() - 1 ]){
                        cout << str << ", ";
                    }
                    else cout << str << endl;
                }

            }
            else cout << "Not found" << endl;
            
        }
        ++count;
    }
    string song = songName.substr(prev,count);

    cout << song  << " -> ";
    if(findArtist[song].size() != 0){
                
        for(auto str : findArtist[song]){
            
            if(str != findArtist[song][findArtist[song].size() - 1 ]){
                cout << str << ", ";                
            }
            else cout << str << endl;
        }

    }
    else cout << "Not found" << endl;

    return 0;
}