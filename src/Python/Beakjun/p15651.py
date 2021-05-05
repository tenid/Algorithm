n,m = map(int,input().split())
result = []

# 재귀적으로 해결
def solution(depth, n, m):
    if depth==m:
        print(' '.join(map(str,result)))
        return

    for i in range(n):
        result.append(i+1)
        solution(depth+1,n,m)
        result.pop()


solution(0,n,m)