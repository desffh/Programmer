#include <iostream>
#include <string>
#include <vector>


using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    int denom3 = denom1 * denom2;

    int numer3 = (numer1 * denom2) + (numer2 * denom1);

    int key = gcd(numer3, denom3);

    vector<int> answer;
    answer.push_back(numer3 / key);
    answer.push_back(denom3 / key);
    return answer;
}