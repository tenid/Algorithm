from itertools import combinations
n,m = map(int, input().split())
data = [x+1 for x in range(n)]

result = list(combinations(data,m))

for i in result:
    print(str(i).strip('(').strip(')').replace(',',''))