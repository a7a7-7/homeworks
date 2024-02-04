#include <iostream>
#include <algorithm>

using namespace std;

int dice[3], consc = 1, money, consn;
int i;

int main(){
    freopen("input.txt", "r", stdin);

    for (i = 0; i < 3; i++)
        cin >> dice[i];

    sort(dice, dice + 3);

    for (i = 0; i < 2; i++)
        if (dice[i] == dice[i + 1]){
            consc++;
            consn = dice[i];
        }

    switch (consc){
    case 3:
        money = 10000 + consn * 1000;

        break;

    case 2:
        money = 1000 + consn * 100;

        break;

    case 1:
        money = *max_element(dice, dice + 3) * 100;

        break;
    
    default:
        break;
    }

    cout << money << endl;

    return 0;
}
