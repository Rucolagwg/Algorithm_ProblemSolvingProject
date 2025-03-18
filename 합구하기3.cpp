#include <cstdio>
#include <iostream>
#define CRT_SCANF_NO_WARNINGS
using namespace std;

int getRangeSumFromOne(int i){
    int answer = 0;
    for(int j = 1; j <= i; j++){ // 안쪽 시그마(합) 구하기 (1부터 i까지)
        answer += j;
    }
    return answer;
}

long long getAnswer(int N){ // long long 8바이트
    long answer = 0;
    for(int i = 1; i <= N; i++){ // 바깥쪽 시그마(합) 구하기 (1부터 N까지) (영상에는 0부터 N까지의 합으로 되어있고 결과에는 차이가 없지만(0을 더하는 것이기에), 엄밀히는 1부터 더하는 것이 맞는것 같다.)
        int rangesum = getRangeSumFromOne(i);
        answer += rangesum;
    }
    return answer;
}

int main(){
    int n;

    scanf("%d", &n); // 자연수 N 입력 받음

    long long answer = getAnswer(n);

    printf("%lld\n", answer);

    return 0;
}