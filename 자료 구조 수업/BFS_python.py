#큐에서 노드를 꺼내내 후 해당 노드의 인접 노드 중 방문하지 않은 노드를 모두 큐에 삿ㅂ입하고 방문 처리
#특정 조건(각 간선의 비용 동일)에서의 최단경로 문제 해결 등에서 사용
#큐의 사용법
from collections import deque

def bfs(graph,start,visited):
    #큐 구현을 위해 deque 라이브러리 사용
    q = deque([start])
    #현재 노드를 방문 처리
    visited[start] = True
    #큐가 빌 때까지 반복
    while q:
        #큐에서 하나의 원소를 뽑아 출력
        v = q.popleft()
        print(v,end=' ')
        #아직 방문하지 않은 인접한 원소들을 큐에 삽입
        for i in graph[v]:
            if not visited[i]:
                q.append(i)
                visited[i] = True



#각 노드가 연결된 정보를 표현(2차원 리스트)
graph=[
    [],
    [2],
    [1]
]

#각 노드가 방문된 정보를 표현(1차원 리스트)
visited = [False]*3

##정의된 DFS 함수 호출
bfs(graph,1,visited)