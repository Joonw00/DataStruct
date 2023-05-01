#include <iostream>
#include <algorithm>		//stl라이브러리 ,,sort함수가 정의돼있다.

using namespace std;

int main(void) {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	//배열 자체는 메모리 주소를 의미하는 하나의 변수임
	sort(a, a + 10);	//메모리주소a와 정렬할 마지막 원소가 있는 메모리 주소a+10을 넣어줌
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}