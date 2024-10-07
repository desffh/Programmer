#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 피자를 먹을 사람 수 n
// 피자는 2조각에서 10조각의 slice

// 최소 한조각 이상 먹을때의 피자판 수

int solution(int slice, int n)
{
    int answer;

    answer = n / slice;

    if (n % slice != 0)
    {
        answer++;
    }

    return answer;
}











