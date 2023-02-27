#include <iostream>

using namespace std;

// 다중 포인터

void SetNumber(int* a)
{
    a = 1;

}

void SetMessage(const char** a)
{
    *a = "Bye";

}

int main()
{
    int a = 0;
    SetNumber(&a);
    cout << a << endl;

    const char* msg = "Hello";

    SetMessage(msg);

    const char** pp = &msg;

    SetMessage(&msg);

    *pp = "Bye";

    cout << msg << endl;

    return 0;
}