#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> set1,u,i,d,u1,i1,d1;
    
    string str;

    getline(cin,str);

    stringstream ss(str);

    int num;

    while(ss >> num){
        u1.insert(num);
        i1.insert(num);
        d1.insert(num);
    }

    while(getline(cin,str)){
        set<int> set2;
        stringstream ss2(str);

        while(ss2 >> num){
            set2.insert(num);
        }

        u.clear();
        i.clear();
        d.clear();

        set_union(u1.begin(), u1.end(),set2.begin(), set2.end(),inserter(u,u.begin()));
        
        set_intersection(i1.begin(), i1.end(), set2.begin(), set2.end(), inserter(i,i.begin()));

        set_difference(d1.begin(), d1.end(),set2.begin(), set2.end(),inserter(d,d.begin()));

       
        u1 = u;
        i1 = i;
        d1 = d;
        

        
    }

    cout << "U: ";
    if(u.size() == 0){
        cout << "empty set";
    }
    else{
        for(int it : u){
            cout<< it << " ";
        }
    }
    cout << endl;

    cout << "I: ";
    if(i.size() == 0){
        cout << "empty set";
    }
    else{
        for(int it : i){
            cout<< it << " ";
        }
    }
    cout << endl;

    cout << "D: ";
    if(d.size() == 0){
        cout << "empty set";
    }
    else{
        for(int it : d){
            cout<< it << " ";
        }   
    }
    cout << endl;
    
}