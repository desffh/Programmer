#include <string>
#include <vector>

using namespace std;

// 직육면체 안에 들어갈 정육면체의 갯수
// box[0] : 직육면체 가로
// box[1] : 직육면체 세로
// box[2] : 직육면체 높이

int solution(vector<int> box, int n)
{
    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;

    answer1 = box[0] / n;
    answer2 = box[1] / n;
    answer3 = box[2] / n;

    return answer1 * answer2 * answer3;
}

// 다른 사람 풀이
int solution(vector<int> box, int n)
{
    int answer = 1;
    for (int i = 0; i < size(box); i++)
    {
        answer *= (box[i] / n);
    }
    return answer;
}