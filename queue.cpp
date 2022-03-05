#include <iostream>
#include <queue>    

using namespace std;

int main(void){
    queue<int> q;
    q.push(7);
    q.push(5);
    q.push(4);
    q.pop();        //가장 먼저들어온 값을 제거
    q.push(6);
    q.pop();
    while(!q.empty()){
        cout << q.front()<< ' ';    //현재 큐에 가장 앞에 있는 값을 출력
        q.pop();
    }

    return 0;
}