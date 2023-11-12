#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    string tag;
    double price;
    vector<pair<double,string>> item_sold;
    map<string, double> item;

    while(true){
        cin >> tag;
        if(tag == "END"){
            break;
        }
        cin >> price;
        item.insert({tag , price});
    }

    while(cin >> tag){
        bool isExist = false;
        for(auto itr = item_sold.begin() ; itr != item_sold.end() ; ++itr){
            if(itr->second == tag){
                itr->first += -item[tag];
                isExist = true;
                break;
            }
        }
        if(!isExist){
            auto it = item.find(tag);
            if(it != item.end()){
                item_sold.push_back({-item[tag],tag});
            }
        }
    }

    if(item_sold.size() == 0){
        cout << "No Sales";
        return 0;
    }

    sort(item_sold.begin(),item_sold.end());
    
    
    for(int i = 0 ; i != item_sold.size() && i < 3 ; ++i){
        cout << item_sold[i].second << " " << -item_sold[i].first << endl;
    }
    
    return 0;
}