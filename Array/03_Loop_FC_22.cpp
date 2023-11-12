#include <iostream>

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    if(n % 2 == 1 ){
        long long sum_a = 0 , sum_b = 0 , sum_c = 0 , m = 0;
        while(m < k){
            long long a , b , c;
            cin >> a >> b >> c;
            if( a == b){
                if(b == c){
                    if(a + b > k){
                        sum_a++;
                        sum_b += 2;
                        sum_c -= 3;
                    }
                    else{
                    sum_a -= 3;
                    sum_b -= 2;
                    sum_c++;
                    }
                }
                else{
                    sum_a += 2;
                    sum_b -= 3;
                }
                
            }
            ++m;
        }
        cout << sum_a << " " << sum_b << " " << sum_c;
        return 0;
        
    }
    else{
        long long s , t;
        cin >> s >> t;
        long long x = s, y = t;
        if(s > t){
            x = s - t;
        }
        else if(s < t){
            y = 2 * (t - s);
        }
        if(x + y > k){
            long long temp = x;
            x = y;
            y = temp;
            x = y + (s * s);
        }
        cout << x << " " << y;
    }
    return 0;
}