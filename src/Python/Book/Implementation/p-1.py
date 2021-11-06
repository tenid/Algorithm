# 문제 : 상하좌우 문제
# 설명 : 요구사항대로 움직이고 난 후의 좌표 출력
# 해결 : 요구사항대로 이동하고 공간을 벗어나지 않았다면 이동, 그렇지 않으면 무시

# 입력값
n = int(input())
plans = input().split()
x, y = 1, 1

# 방향 벡터 (L, R, U, D)
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
move_types = ['L', 'R', 'U', 'D']

for plan in plans:
    for i in range(len(move_types)):
        if plan == move_types[i]:
            nx = x + dx[i]
            ny = y + dy[i]
    # 공간을 벗어나는 경우 무시
    if nx < 1 or ny < 1 or nx > n or ny > n:
        continue
    x, y = nx, ny

print(x, y)


