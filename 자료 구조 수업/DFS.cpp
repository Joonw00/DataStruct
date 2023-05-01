#include <iostream>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> a[8];   //vector 선언

void dfs(int x){
    if(c[x]) return;    //방문한 적이 있으면 return
    c[x] == true;       //방문처리(첫 방문 이라면)
    cout << x << ' ';   //노드 출력
    for(int i=0; i<a[x].size();i++){    //인접노드들을 방문하며
        int y = a[x][i];        //그 인접노드를 대상으로 dfs를 실행
        dfs(y);
        //계속 자신과 인접한 노드를 dfs로 탐색 수행        
    }
}

int main(void){
    //1와 2를 연결
    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(3);
    a[3].push_back(2);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    a[4].push_back(5);
    a[5].push_back(4);

    a[6].push_back(7);
    a[7].push_back(6);

    dfs(1); //dfs를 정점1에대해 수행

    return 0;
}

