#include <iostream>
#include <algorithm>		//stl라이브러리 ,,sort함수가 정의돼있다.

using namespace std;

bool compare(int a, int b){    //정렬할 기준을 직접 설정
    return a<b; //a가 b보다 작을 때 우선적으로 정렬(True반환)
    //부등호 방향 바꾸면 내림차순 됨 
}

int main(void) {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	//배열 자체는 메모리 주소를 의미하는 하나의 변수임
	sort(a, a + 10, compare);	
    for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}


//sor함수가 강력한 이유
//:정렬할 기준을 마음대로 정의할 수 있음(함수를 정의해 그함수를 sort함수 안에 매개변수로 넣어줌)
//정렬의 기준을 편하게 구현 가능