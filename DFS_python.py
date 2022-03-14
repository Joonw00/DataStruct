def dfs(graph,v,visited):
    #현재 노드 방문 처리
    visited[v] = True
    print(v,end=' ')
    #현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for i in graph[v]:
        if not visited[i]:
            dfs(graph,i,visited)

#각 노드가 연결된 정보를 표현(2차원 리스트)
graph=[
    [],
    [2],
    [1]
]

#각 노드가 방문된 정보를 표현(1차원 리스트)
visited = [False]*3

##정의된 DFS 함수 호출
dfs(graph,1,visited)