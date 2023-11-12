#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , double> itemPrice;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        string item;
        double price;
        cin >> item >> price;
        itemPrice[item] = price;
    }

    double total = 0, top = 0;
    map<string, double> sales;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        string item;
        int amt;
        cin >> item >> amt;
        double temp = itemPrice[item] * amt;
        total += temp;
        sales[item] += temp;
        top = max(top , sales[item]);
    }
    if(total == 0){
        cout << "No ice cream sales";
        return 0;
    }
    cout << "Total ice cream sales: " << total << endl;
    cout << "Top sales:";
    for(auto it : sales){
        if(it.second == top){
            cout << " " << it.first ;
        }
    }
    
}