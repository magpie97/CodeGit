#include <iostream>
#include <vector>
#include <algorithm>

int solution();

int main()
{
    /**
     * 프로그래머스 배열 뒤집기 문제 해결
     * vector의 시작 인덱스와 끝 인덱스를 가져오는 begin() 과 end() 를 사용했다
     * 배열의 인덱스를 바꾸는 방법에 필요한 라이브러리를 찾았다 reverse라는 함수였다
     * 헤더를 추가하여 사용하면 된다  vector 헤더에 있을줄 알았지만 algorithm 라이브러리에 포함 되어있었다
     * stl을 알아두면 좋다고 하는 말이 있지만 현업에선 직접만든 라이브러리나 유로 라이브러리를 사용한다고 하는데
     * 정답은 없는듯 하지만 문제 풀이하며 사용하게 될 stl 의 기능들을 찾아보며 사용할 것으로 보여진다
    */

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    
    reverse(num_list.begin(), num_list.end());

    for(int i = 0; i < num_list.size(); i++)
    {
        num_list[i];
        
    }
    
    
    return answer = num_list;
}
    /**  리펙토링
     * 문제를 풀고 리펙토링을 생각 해봤다  
     * reverse 함수를 사용해서 요소의 값을 swap 했는데 굳이 다시 반복문을 사용하는건
     * 비용이 더 들었던거 같다
     * 반복문을 제거 후 reverse 함수로 초기화 된 num_list 매개변수를 리턴 했다
     * 테스트 후 결과는 문제없이 통과 했다
    */




    return 0;
}

