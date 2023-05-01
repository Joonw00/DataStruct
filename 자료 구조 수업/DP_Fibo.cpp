//메모이제이션 기법이용 피보나치->O(N)(높이 만큼 연산 처리)
//DP

#include <stdio.h>

int d[100]; //임시 저장소

int dp(int x){
    if(x == 1) return 1;
    if(x == 2)return 2; //초기값, 재귀함수 종료 조건
    if(d[x] != 0) return d[x];  //구한 적 있을 때는 return
    return d[x] = dp(x-1) + dp(x-2);            //이런식으로도 씀?
    //구한 적 없을 때 d[x]에 기록
}

int main(void){
    printf("%d", dp(50));
}