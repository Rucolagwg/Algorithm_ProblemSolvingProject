#include <stdio.h>
#include <iostream>
#define CRT_SCANF_NO_WARNINGS
using namespace std;

void solve(int data[], int n, int p, int q){
    int count = 0; // 탑승 인원 수
    int sum = 0; // 탑승 인원 몸무게 총합

    for(int i = 0; i < n; i++){
        if(p >= data[i]){ // // 조건1: p kg을 넘는 사람은 탑승 불가
            count++; // 조건 충족 시 count 변수에 1씩 더함
            sum += data[i]; // 조건 충족시 sum 변수에 data[i](몸무게) 더함
        }
    }
    printf("%d %d\n", count, sum); // 줄바꿈 주의!
    if(sum <= q) // 조건2: 탑승 승객들의 총 몸무게가 q를 넘지 않아야 한다.
        printf("YES\n");
    else
        printf("NO\n");
}


int main(){
    int n, p, q; // 변수 선언
    int *data;

    scanf("%d %d %d", &n, &p, &q); // 첫번째 줄 입력: 입력받은 변수들을 각각 n, p, q의 주소에 저장 (공백 구분)
    data = new int[n]; // 동적 배열 할당. 길이 n
    
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]); // 두번째 줄 입력: for문을 이용하여 입력값을 각각의 data 배열의 주소에 저장
    }

    solve(data, n, p, q);

    delete[] data;
    return 0;
}