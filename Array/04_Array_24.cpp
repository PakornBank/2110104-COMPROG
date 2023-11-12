#include <iostream>

using namespace std;

void print_arr(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void flip(int arr[], int idx){
    for(int i = 0 ; i < idx / 2 ; ++i){
        int temp = arr[i];
        arr[i] = arr[idx - 1 - i];
        arr[idx - 1 - i] = temp;
    }
}

int find_max(int arr[], int len){
    int max = arr[0];
    int idx = 0;
    for(int i = 0 ; i < len ; ++i){
        if(arr[i] > max){
            max = arr[i];
            idx = i;
        }
    }
    return idx;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }

    int pile = n;
    print_arr(arr,n);

    while(pile > 1){       
        int idx = find_max(arr,pile) + 1;
        if(idx == 1){
            flip(arr,pile);
            print_arr(arr,n);
            --pile;
        }
        else if(idx != pile){
            flip(arr,idx);
            print_arr(arr,n);
        }
        else if(idx == pile){
            --pile;
        }
    }

    return 0;
}