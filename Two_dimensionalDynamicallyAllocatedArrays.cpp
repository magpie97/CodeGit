#include <iostream>

using namespace std;

int main()
{
    // 2차원 정적 할당
    int array[10][5];

    
    int** array_1 = new int[10][5];
    /*
    2차원 동적할당 
    위 코드는 작동하지 않음  이를 해결하려면
    두 가지 방법
    */ 

   int (*array)[5] = new int[10][5];
   // or
   auto array = new int[10][5];
    // 



   
    



    return 0;
}