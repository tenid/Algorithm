# 문제 : 왕실의 나이트
# 설명 : 나이트가 움직일 수 있는 경우의 수를 구하기
# 해결 : 경우의 수 8가지를 확인하며 카운트

input_data = input()

column = ord(input_data[0]) - ord('a') + 1
row = int(input_data[1])
count = 0
direction = [
    [-2, -1], [-2, 1],
    [1, -2], [-1, -2],
    [2, -1], [2, 1],
    [-1, 2], [1, 2]
]

for i in range(len(direction)):
    nx = row + direction[i][0]
    ny = column + direction[i][1]

    if nx < 1 or ny < 1 or nx > 8 or ny > 8:
        continue
    count += 1
print(count)
