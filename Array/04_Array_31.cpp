#include <iostream>
#include <string>
#include<cmath>

using namespace std;

void printKMBT(int n){
    string out[] = {"thousand", "million", "billion", "trillion"};
    cout << out[n-1] << " ";
}

void print1to19(int n){
    string out[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    cout << out[n-1];
}

void printtenthdigit(int n){
    string out[]= { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    cout << out[n/10 - 2];
    if(n%10 > 0){
        cout<<" ";
        print1to19(n%10);
    } 
}

void printhundredthdigit(int n){
    int temp = n/100;
    print1to19(temp);
    cout << " " << "hundred";
}


int main(){
    long long num;
    cin >> num;

    if( num == 0 ){
        cout<<"zero";
        return 0;
    }
    int k = 12;

    while(num >= 1){
        long long segment = num/(long long)pow(10,k);
        num%=(long long)pow(10,k);
        k -= 3;
        if(segment == 0){
            continue;
        }
        if(segment >= 100){
            printhundredthdigit(segment);
            cout<<" ";
        }
        segment %= 100;
        if(segment > 0){
            if(segment < 20){ 
                print1to19(segment);
                cout<<" ";
            }
            else{
                printtenthdigit(segment);
                cout<<" ";
            }
        }
        
        if(k+3 > 0) printKMBT((k+3) / 3);
        
        
    }
    
    

    return 0;
    
    
   

}