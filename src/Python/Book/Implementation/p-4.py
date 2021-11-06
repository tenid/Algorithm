# 문제 : 문자열 재정렬
# 설명 : 주어진 문자열(대문자 알파벳, 숫자)에서 모든 알파벳을 먼저 오름차순으로 출력한 뒤 이어서 숫자(0~9)를 더한 합계를 출력
# 해결 : 숫자의 아스키 코드는 대문자 알파벳(A)의 아스키 코드 65보다 낮다.

input_data = input()
sum = 0
charArray = []
for i in input_data:
    if ord(i) < 65:
        sum += int(i)
    else:
        charArray.append(i)
charArray.sort()
if sum != 0:
    charArray.append(str(sum))
print(''.join(charArray))
