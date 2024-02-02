#include <iostream>
#include <algorithm>

using namespace std;

int d[1024], a[1024], num;
int i, j;

int main(){
    freopen("input.txt", "r", stdin);

    cin >> num;

    for (i = 0; i < num; i++)
        cin >> a[i];

    d[0] = a[0];
    d[1] = d[0] + a[1];
    d[2] = d[0] + d[1];
    for (i = 3; i < num; i++)
        d[i] = max(d[i - 3] + a[i - 1] + a[i], max(d[i - 2]+a[i], d[i - 1]));
    

    for (i = 0; i < num; i++)
        cout << d[i] << " ";

    return 0;
}
