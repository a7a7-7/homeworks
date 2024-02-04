#include <iostream>
#include <algorithm>

using namespace std;

// array of number // array of number // straight number count
int num_arr[1024], numc, sn_arr;
int i, j = 1;

int main(){
    freopen("input.txt","r", stdin);
    cin >> numc;

    for (i = 0; i < numc; i++)
        cin >> num_arr[i];

    for (i = 0; i < numc; i++){
        if (num_arr[i] <= num_arr[i + 1])
            j++;
        else{
            if (j >= sn_arr)
                sn_arr = j;
            j = 1;
        }
    }

    cout << sn_arr << endl;

    return 0;
}
