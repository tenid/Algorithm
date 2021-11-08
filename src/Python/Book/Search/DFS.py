# 방문 처리
# 인접한 노드 확인 후 방문하지 않는 노드 이동

def dfs(graph, start, visited):
    print(start, end=' ')
    visited[start] = True

    for i in graph[start]:
        if not visited[i]:
            dfs(graph, i, visited)





graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

visited = [False] * 9


dfs(graph,1,visited)