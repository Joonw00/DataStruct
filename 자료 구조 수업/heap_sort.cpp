#include <stdio.h>

int number = 9; //전체 데이터 개수
int heap[9] = {7, 6,5,8,3,5,9,1,6};

int main(void){
    //먼저 전체 트리 구조를 최대 힙 구조로 바꾸기.
    for (int i=1;i<number; i++){
        int c =i;
        do{
            int root = (c-1)/2;     //root:자기자신의 부모
            if(heap[root] < heap[c]){   //부모보다 자신이 크면, 서로 바꿔줌
                int temp =  heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            c = root;   //이후,자식의 부모로 이동해 반복적으로 시행
            //반복문을 사용했지만, 원리는 재귀!! 부모가 자기자신보다 작으면 위치 바꾸기
        }while (c != 0);
    }
    //크기를 줄여가며 반복적으로 힙을 구성
    for(int i = number-1;i>=0;i--){
        int temp = heap[0]; //가장 뒤의 원소와 전체의 Root(0의 값)원소를 바꿔주기  == 가장 큰 값을 맨 뒤로 보냄
        heap[0] = heap[i];
        heap[i] = temp;

        int root = 0;
        int c=1;

        //힙 구조를 만드는 부분
        do {
            c = 2*root+1;   //c는 root의 자식
            //자식 중에 더 큰 값을 찾기
            if(heap[c] < heap[c+1] &&c<i-1){
                c++;    //오른쪽 값이 더 크면 c를 1더해줌 == 오른쪽으로 이동시켜줌 == 왼쪽과 오른쪽중에 더 큰 값을 c에 담는다
            }
            //루트보다 자식이 더 크다면 교환
            if (heap[root] <heap[c] && c<i){
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;       //한 번 바꾼 후,c를 다시 root로 이동시켜 계속 반복(재귀적으로 힙 구조를 만듬)
        }while(c<i);
    }
}

//힙 정렬은 별도로 추가적인 배열이 필요하지 않다는 점에서, 병합 정렬보다 메모리 측면에서 매우 효율 적임
//+항상O(N*logN)을 보장할 수 있어 강한 정렬 알고리즘임

//이론적으로는 퀵,병합보다 우위
//단순 속도는 퀵이 평균적으로 빨라, 힙정렬이 일반적으로 많이 사용되지는 않는다