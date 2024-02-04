#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string num_str;
int num, sum;
int i;

int main(){
    freopen("input.txt", "r", stdin);

    cin >> num_str;
    
    reverse(num_str.begin(), num_str.end());

    for (i = 0; i < num_str.size(); i++)
        sum += num_str.at(i) - 48;
    num = stoi(num_str);

    cout << num << endl << sum << endl;

    return 0;
}
