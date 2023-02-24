#include "header.h"

void input()
{
    printf(" input : "); // op코더, led 번호, 시작 시간, 끝나는 시간, 패턴(또는 인터벌) 순서로 받음
    scanf("%1d %1d %d %d %1d", &data.opcode, &data.LedNum, &timer.StartTime, &timer.EndTime, &data.patter);

    // data.opcode=data.opcode1 - '0'; // 인터페이스 문서랑 형이 다르길래 그냥 형변환 시켜서 만들어둠.
    // data.LedNum=data.LedNum1 - '0';
    // data.patter=data.patter1 - '0';

    printf(" wait %d \n", timer.StartTime*1); // 대기(시작) 시간

    sleep(timer.StartTime*1); // 시작 시간만큼 대기
}

