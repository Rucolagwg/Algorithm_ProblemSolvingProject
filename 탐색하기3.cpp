#include <cstdio>
#include <cmath>
#include <iostream>
#define CRT_SCANF_NO_WARNINGS
using namespace std;

int findIndex(int data[], int n){
    int sum = 0, x = 0; // x: 조건 만족 인덱스 저장
    for(int i = 0; i < n; i++)
        sum += data[i]; // 배열 data의 모든 요소 합 저장

    for(int i = 0; i < n; i++){
        int dx = abs(n * data[x] - sum); // x에서의 차이값
        int di = abs(n * data[i] - sum); // i에서의 차이값
        if(di < dx)
            x = i; // di < dx일 때, x에 i 저장
    }
    return x+1; // 반환값은 1부터 시작하므로 x+1을 반환
}

int main(){
    int n;
    int* data;

    scanf("%d", &n);
    data = new int[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }

    int answer = findIndex(data, n);
    printf("%d %d\n", answer, data[answer-1]);

    delete[] data;
    return 0;
}