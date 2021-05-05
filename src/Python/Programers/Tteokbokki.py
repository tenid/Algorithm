# 이진 탐색
n,m = map(int, input().split())
array = list(map(int,input().split()))

start = 0
end = max(array)
result =0
while (start<end):
    total = 0
    mid = (start+end) // 2
    for i in array:
        if mid<i:
            total += i-mid
    # 떡의 양이 적을 경우
    if total<m:
        end = mid -1
    # 떡의 양이 많을 경우  -> 덜 짤라보기
    else:
        result = mid
        start = mid +1
print(result)


