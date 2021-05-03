def solution(progresses, speeds):
    answer = []
    day = 0
    count = 0

    # 기능 리스트에 비어질 때까지
    while len(progresses) > 0:
        # 첫번째 기능의 작업 진도가 100이상일 때까지 반복
        # progresses 리스트에서 제거, speeds 리스트에서 제거
        # count 1증가
        if (progresses[0] + day * speeds[0]) >= 100:
            progresses.pop(0)
            speeds.pop(0)
            count += 1
        # 작업 진도가 100미만일 경우
        else:
            # 다른 기능이 개발된 경우 정답 리스트에 추가 후 초기화
            if count > 0:
                answer.append(count)
                count = 0
            # 다음날
            day += 1
    answer.append(count)
    return answer