#include <iostream>
#include <vector>
#include <string>


int solution(int n) {
    int answer = 0;

    // 판매하는 피자 조각의 갯수
    int pizzapiece = 7;

    // 가독성을 위한 변수
    int result = 0;

    /**
     * 처음엔 반복문을 혼합하여 사용하려 했다 
     * 그러나 좀만 생각해 보니 필요없다고 판단하여
     * 조건문으로만 굴러갈 꺼 같다는 생각이 들어 구현방법을 변경했다
     * 
     * 인원수에서 나머지값이 0과 같다면 피자를 추가 안해도 되고
     * 그것이 아니라면 피자를 추가 해주는 방법을 사용하였다
    */
    if(n % pizzapiece == 0)
    {
        result = n / pizzapiece;
    }else
    {
        result = n / pizzapiece + 1;
    }

    return answer = result;
}
