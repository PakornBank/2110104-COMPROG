#include <iostream>
#include <cmath>

using namespace std;

int finddigit(unsigned long long n){
    unsigned long long m = 1;
    int pow = 0;
    while(m <= n){
        m *= 10;
        ++pow;
    }
    return pow;
}

unsigned long long pow(int x, int y){
    long long result = 1;
    for(int i=0 ; i < y ; i++){
        result *= x;
    }
    return result;
}

unsigned long long find_sum_digit(unsigned long long n , int digit_n  ){
    unsigned long long sum_n = 0;
    sum_n += (n - pow(10,digit_n-1) + 1) * digit_n  ;
    for(int i = 1 ; i < digit_n ; i++){
        sum_n += pow(10,i-1) * 9 * (i);
    }

    return sum_n + 1;

}

int main(){
    unsigned long long n,m,sum_n = 1, sum_m = 1;
    cin>>m>>n;
    int digit_n = finddigit(n);
    int digit_m = finddigit(m);

    if(n == m) cout << digit_m;
    else cout<<find_sum_digit(n,digit_n) - find_sum_digit(m,digit_m) + 1;
    
    return 0;

}