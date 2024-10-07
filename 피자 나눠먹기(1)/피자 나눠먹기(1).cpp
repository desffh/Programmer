#include <string>
#include <vector>

using namespace std;

// n명의 사람이 주어진다. 피자는 7조각으로 나눈다
// 최소 한명이 한조각씩 먹을때 필요한 피자판 수
int solution(int n)
{
    int count = 0;

    if (n > 7)
    {
        count = 1 + (n / 7);
    }
    if (n > 7 && n % 7 == 0) // n이 7보다 크고 7로 나눴을때 나머지가 0이라면 7의 배수
    {
        count = n / 7;
    }
    if (n <= 7)
    {
        count = 1;
    }

    return count;
}

// 다른 사람의 풀이
int solution(int n)
{
    int answer;

    answer = n / 7;

    if (n % 7 != 0)
    {
        answer++;
    }

    return answer;
}
