# 문제 : 시각
# 설명 : 00시 00분 00초부터 N시 59분 59초까지의 모든 시각중 3이 하나라도 포함되는 경우의 수 출력
# 해결 : 하루는 86,400초 이므로 완전 탐색(Brute Forcing)으로 해결
n = int(input())

count = 0
for hour in range(n+1):
    for min in range(60):
        for sec in range(60):
            if '3' in str(hour) + str(min) + str(sec):
                count += 1

print(count)
