#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;

}

void Sort(int numbers[], int count)
{
    // 배열 크기 만큼 실행 
    for(int i = 0; i < count; i++)
    {
        // 제일 높은 값을 저장할 변수
        // 현재 제일 높은 값은 0번째이며 초기화 한다
        int best = i;

        // 그 다음 배열을 사용하기 위해 1 +를 더 한다
        for(int j = i + 1; j < count; j++)
        {
            if(numbers[j] < numbers[best])
            {
                best = j;
            }

            // 비교한 값이 크다면 스왑
            if(i != best)
                Swap(numbers[i], numbers[best]);

        }
    }

    
}

int main()
{
    int a = 1;
    int b = 2;

    Swap(a, b);

    // 높은 차순으로 나열할 배열
    int numbers[6] = {1, 4, 2, 5, 3, 6};

    
    Sort(numbers, sizeof(numbers) / sizeof(int));



    return 0;
}