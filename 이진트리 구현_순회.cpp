//포인터를 이용해 구현했기 때문에, 완전이진 트리가 아니라도 안정적으로 작동한다.
//포인터를 이용한 이진 트리의 구현 /각 순회또한 구현

#include <iostream>

using namespace std;

int number = 15;    //노드의 개수

// 하나의 노드 정보를 선언(구조체 정의)
//포인터 형태로 사용하기 위해, typedef이용
typedef struct node *treePointer;       //node라는 구조체를 treePointer라는 이름으로,포인터 형식으로 사용하겠다.
typedef struct node {   //구조체 node 정의
    int data;           
    treePointer leftChild, rightChild;      //자식들을 가리키는 포인터 변수 선언    
} node; //node라는 이름으로 사용할 수 있도록

//전위 순회를 구현
void preorder(treePointer ptr){ //특정한 포인터 위치에서 전위순회를 이용하도록 만듬
    if(ptr){    //해당 포인터가 NULL값이 아니라 데이터를 가지고 있다면
        cout << ptr->data << ' ';   //자기 데이터를 출력
        preorder(ptr->leftChild);       //왼쪽 노드를 기준으로 해 전위순회를 다시 실행
        preorder(ptr->rightChild);
    }
}

//중위 순회를 구현
void inorder(treePointer ptr){ 
    if(ptr){  
        inorder(ptr->leftChild);      
        cout << ptr->data << ' ';   
        inorder(ptr->rightChild);
    }
}

//후위 순회를 구현
void postorder(treePointer ptr){ 
    if(ptr){  
        postorder(ptr->leftChild);      
        postorder(ptr->rightChild);
        cout << ptr->data << ' ';   
    }
}


//순회 진행
int main(void){
    node nodes[number + 1];   //15개의 노드가 담길 수 있는 데이터 배열을 생성

    for(int i=1; i<=number;i++){    //각 원소를 초기화 할 수 있도록
        nodes[i].date = i;   //데이터는 1~15까지 전부 자기 자신이 들어가도록 만듬
        nodes[i].leftChild = NULL;
        nodes[i].rightChild = NULL;  //좌,우 자식은 모두 NULL값
    }
    //짝수는 왼쪽, 홀수는 오른 쪽 연결
    for(int i=1; i<=number;i++){
        if(i%2 == 0){
            nodes[i/2].leftChild = &nodes[i];
        }
        else{
            nodes[i/2].rightChild = &nodes[i];
        }
    }
    preorder(&nodes[1]);
    inorder(&nodes[1]);
    postorder(&nodes[1]);
    return 0;
}