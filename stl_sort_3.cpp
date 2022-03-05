#include <iostream>
#include <algorithm>

using namespace std;

class Student{  //class는 일반적으로 여러개의 변수를 하나로 묶기 위해 사용
//student라는 자료형을 만들어 주는 것
public:
    string name;
    int score;
    Student(string name, int score){ //생성자:특정한 객체를 초기화 하기 위해 사용
        this->name = name;
        this->score = score; 
    }
    //정렬 기준(점수가 작은 순서)
    bool operator <(Student &student){
        return this->score< student.score;      //정렬기준이 점수가 되도록
    }   //c언어 문법에서는 ->(화살표)를 이용해 내부 변수를 가리킬 수 있음
};

int main(void){
    Student students[]={
        Student("박준우", 90),
        Student("이영도", 80)
    };
    sort(students, students+2); //학생 클래스에서 정렬기준을 정의 했으므로 여기서는 인자 2개만 받음
    for(int i= 0; i<2; i++){
        //cout << students[i].name << ' ';
    }
}


//class를 이용해 정렬하는 방식이 실무에서 많이 사용되는 방식이다.
//프로그래밍 속도 측면에서는 유리하지 않다(class를 쓰는 방법은)

//요약:직접 객체를 정의해서 그 객체의 트정한 변수에 맞게 정렬을 하는 작업