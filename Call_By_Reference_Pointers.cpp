#include <iostream>

using namespace std;

void Swap(int** ptr1, int** ptr2);



int main()
{
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << *ptr1 << " " << *ptr2 << endl;

    Swap(&ptr1, &ptr2);

    cout << *ptr1 << " " << *ptr2 << endl;

    return 0;
}

void Swap(int** ptr1, int** ptr2)
{
    int* temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}