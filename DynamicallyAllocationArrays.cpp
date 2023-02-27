#include <iostream>

using namespace std;

int main()
{
    int length;

    cin >> length;

    // 동적 할당 
    int* array = new int[length];

    array[0] = 1;
    array[1] = 2;

    for(int i = 0; i < length; i++)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;

    }

    // 메모리 삭제
    delete [] array;



    return 0;
}