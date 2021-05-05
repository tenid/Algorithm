# bridge_length: 다리 길이  weight:제한 무게 truck_weights:트럭별 무게
def solution(bridge_length, weight, truck_weights):
    answer = 0
    # 다리 만들기 0:빈 공간
    trucks_on_bridge = [0] * bridge_length
    # 다리에 트럭이 모두 지나갈 때까지
    while len(trucks_on_bridge):
        # 타이머
        answer += 1
        # 다음 들어올 트럭이 들어올 자리 만들기
        trucks_on_bridge.pop(0)
        # 대기중인 트럭이 있다면
        if truck_weights:
            # 다리위에 트럭들의 무게 + 다음 대기중인 트럭의 무게 <= 제한 무게
            if sum(trucks_on_bridge) + truck_weights[0] <= weight:
                trucks_on_bridge.append(truck_weights.pop(0))
            # 다음 트릭이 올라오면 제한 무게 초과로 안되는 경우
            # 빈공간 표시
            else:
                trucks_on_bridge.append(0)
    return answer