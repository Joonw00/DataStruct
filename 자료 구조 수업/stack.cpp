#include <iostream>
#include <stack>    

using namespace std;
int main(void){
    stack<int> s;   //들어가는 데이터를 int형을 사용하겠다고 정의
    s.push(7);      //하나의 함수임(push)
    s.push(5);
    s.push(4);
    s.pop();
    s.push(6);
    s.pop();
    while(!s.empty()){  //!뭐임??
        cout << s.top()<<' ';   //스택이 빌 때까지,스택의 가장 위의 데이터를 출력
        s.pop();
    }   //스택에 남아있는 데이터 확인
    return 0; 
}