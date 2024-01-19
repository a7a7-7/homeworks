#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, int> > ballons;
int N, num, dir;
int i;

int main(){

    cin >> N;

    /*
        first:
            종이에 적혀있는 값
        second:
            풍선 순서
    */
    for (i = 0; i < N; i++){
        cin >> num;
        ballons.push_back(make_pair(num, i + 1));
    }

    while(!ballons.empty()){
        dir = ballons.front().first;
        cout << ballons.front().second << " ";
        ballons.pop_front();

        if (0 < dir){
            // 풍선 룰렛을 오른쪽으로 돌리기
            for (i = 0; i < dir - 1; i++) {
                ballons.push_back(ballons.front());
                ballons.pop_front();
            }
        }else{
            // 풍선 룰렛을 왼쪽으로 돌리기
            for (i = 0; i < -dir; i++) {
                ballons.push_front(ballons.back());
                ballons.pop_back();
            }
        }
    }

    cout << endl;

    return 0;
}