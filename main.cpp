#include<iostream>
#include<sstream>
#include<queue>

using namespace std;

string cmd[100], func;
queue<int> q;
int num, param;
int i;

int main()
{
    cin >> num;

    for (i = 0; i <= num; i++)
        getline(cin, cmd[i]);

    for (i = 0; i <= num; i++){
        istringstream iss(cmd[i]);

        iss >> func;

        if (func == "push"){
            iss >> param;
            q.push(param);
        }else if (func == "front")
            cout << q.front() << endl;
        else if (func == "back")
            cout << q.back() << endl;    
        else if (func == "size")
            cout << q.size() << endl;   
        else if (func == "empty")
            cout << q.empty() << endl;  
        else if (func == "pop"){
            if (q.empty())
                cout << "-1" << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    

    return 0;
}