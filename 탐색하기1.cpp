#include <stdio.h>
#include <iostream>
#define CRT_SCANF_NO_WARNINGS
using namespace std;

int findIndex(int data[], int n, int m){
    int index = -1; // index 선언 및 -1로 초기화
    for(int i = 0; i < n; i++){
        if(data[i] == m) // i가 0부터 n-1까지 반복하면서 data[i]과 m이 같은지 확인
            index = i;
    }
    return index; // index 값을 반환!
}

int main(){
    int n, m; // 변수 선언
    int *data;

    scanf("%d %d", &n, &m); // 첫번째 줄 입력: 입력받은 변수들을 각각 n, m의 주소에 저장 (공백 구분)
    data = new int[n]; // 길이 n의 메모리를 int형으로 선언
    
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]); // 두번째 줄 입력: for문을 이용하여 입력값을 각각의 data 배열의 주소에 저장
    }

    int answer = findIndex(data, n, m);
    printf("%d\n", answer);

    delete[] data;
    return 0;
}