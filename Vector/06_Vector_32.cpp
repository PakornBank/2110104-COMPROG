#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    string command;
    cin >> command;
    

    vector<pair<pair<int,int>,vector<int>>> fit;

    if(command == "first"){
        int num;
        while(cin >> num){
            bool foundFit = false;
            for(int i = 0 ; i < fit.size() ; ++i){
                if(num <= 100 + fit[i].first.first){
                    foundFit = true;
                    fit[i].first.first -= num;
                    fit[i].first.second += 1;
                    fit[i].second.push_back(num);
                    break;
                }
            }
            if(!foundFit){
                fit.push_back({{-num,1},{num}});
            }
        }
    }

    if(command == "best"){
        int num;
        while(cin >> num){
            bool foundFit = false;
            int bestFit = 0;
            int bestId = -1;
            for(int i = 0 ; i < fit.size() ; ++i){
                if(num <= 100 + fit[i].first.first){
                    foundFit = true;
                    if(num - fit[i].first.first > bestFit){
                        bestFit = num - fit[i].first.first;
                        bestId = i;
                    } 
                }
            }

            if(foundFit){
                fit[bestId].first.first -= num;
                fit[bestId].first.second += 1;
                fit[bestId].second.push_back(num);
            }
            

            if(!foundFit){
                fit.push_back({{-num,1},{num}});
            }
        }
    }

    for(auto &i : fit){
        sort(i.second.begin(),i.second.end());
    }

    sort(fit.begin(),fit.end());


    for(auto i : fit){
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}