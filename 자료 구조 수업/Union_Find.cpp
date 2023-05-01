//Union-Find(합집합 찾기 알고리즘) // 그래프 

#include <stdio.h>

int getParent(int parent[], int x){     //getParent로 특정 노드의 부모를 찾을 수 있도록 만듬
    if(parent[x] == x) return x;        //x와 x의 부모의 값으 같으면 x를 반환(재귀함수의 종료 부분)
    return parent[x] = getParent(parent, parent[x]);        //다르다면 실제 부모를 찾아 재귀함수 실행//부모노드를 찾는 함수
}

//두 부모 노드를 합치는 함수
int unionParent(int parent[], int a,int b){
    a = getParent(parent, a);       //각각의 부모 값을 구함(a,b의)
    b = getParent(parent, b);
    if(a<b) parent[b] = a;          //더 작은 값으로 부모를 합쳐줌
    else parent[a] = b;
}

//같은 부모를 가지는지 확인 == 같은 그래프에 속해 있는 지
int findParent(int parent[], int a, int b){
    //부모값을 이용해, 두 노드가 동일한 그래프에 속해있는 지 확인
    a = getParent(parent, a);
    b = getParent(parent, b);
    if(a==b) return 1;  //a,b가 동일하면, 1을 반환해, 같은 부모를 가짐을 알림
    return 0;   //아니라면 0을 반환해, 서로 다른 그래프에 속해있음을 알림 
}

int main(void){
    int parent[11];
    for(int i =1; i<=10; i++){
        parent[i] = i;  //기본적으로,자기 자신을 부모로 가리키도록
    }
    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);

    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);
    //2개의 그래프 집합이 존재하도록 설정했음

    printf("1과 5는 연결되어 있나요? %d\n", findParent(parent, 1, 5));  //1,5가 같은 부모인 지 확인
    unionParent(parent, 1, 5);  //5대신 6,7등을//or 1대신 2등을 써도 연결처리가 된다!!  (16가지 가능?) *******//서로 다른 그래프의 2개를 골라야 함
    printf("1과 5는 연결되어 있나요? %d\n", findParent(parent, 1, 5));
}

