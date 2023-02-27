#include <iostream>

using namespace std;

// 원형
void Swap(int** ptr1, int** ptr2);



int main()
{
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    // 변경 전
    cout << *ptr1 << " " << *ptr2 << endl;

    // 함수 호출
    Swap(&ptr1, &ptr2);

    // 변경 후
    cout << *ptr1 << " " << *ptr2 << endl;

    /*
    output
    : 10 20
    : 20 10
    */

    return 0;
}

void Swap(int** ptr1, int** ptr2)
{
    int* temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}