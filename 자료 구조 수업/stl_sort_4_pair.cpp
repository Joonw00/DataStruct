#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;    //std(클래스)에 있는 특정 함수 cout를 사용하겠다(이거 쓰면 std::안써줘도 되는 듯)
//include에서 .h를 쓰지 않는 대신 using~~를 씀


//vector와 pair라이브러리를 이용해, 클래스를 정의하지 않고 정렬을 실행해보 
int main(void){
    vector<pair<int, string> > v;   //pair : 한 쌍의 데이터를 다루기 위해 사용하는 라이브러리(정렬 시 앞의 것을 기준으로 정렬)
    //앞의 것:first, 뒤의 것: second
    v.push_back(pair<int, string>(90,"박준우"));
    v.push_back(pair<int, string>(100,"백준")); 
    v.push_back(pair<int, string>(70,"나동빈"));
    //벡터로 만든 리스트에 접근 : 벡터에 붙은 함수들 사용
    //push_back : 리스트의 마지막 부분에 삽입
    //size() : 삽입이 이뤄져,벡터안에 총 몇개의 데이터가 들어가 잇는 지 (벡터의 크기)
    sort(v.begin(),v.end() );	//벡터의 처음부터 마지막 값까지 정렬시킴
    for(int i=0;i<v.size();i++){   
        cout << v[i].second << ' ';     //여기서는 이름 정보를 의미(뒤의 정보)
    }
    return 0;
}