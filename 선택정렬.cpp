#include <cstdio>
#include <iostream>
#define CRT_SCANF_NO_WARNINGS
using namespace std;

int getMinIndexRange(int data[], int n, int begin, int end){
    int index = begin;
    for(int i = begin; i <= end; i++){
        if(data[index] > data[i]) 
            index = i; // data[index]가 data[i]보다 크다면 index에 i 업데이트
    }
    return index; // index 값 반환
}

void selectionSort(int data[], int n){
    for(int i = 0; i < n; i++){
        int minIndex = getMinIndexRange(data, n, i, n-1); // 가장 작은 원소의 위치 찾기
        
        // data[i]와 data[minIndex]의 위치 바꿈
        int temp = data[minIndex]; // 임시 변수 temp에 data[minIndex] 저장
        data[minIndex] = data[i]; // data[minIndex]에 data[i] 저장
        data[i] = temp; // data[i]에 temp 저장
    }
}

int main(){
    int n;
    int* data;

    scanf("%d", &n); // 첫번째 입력 받는다.
    data = new int[n]; // 동적 배열 할당. 길이 n

    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }

    selectionSort(data, n); // 오름차순 정렬 함수 호출

    // 밑은 출력 형식에 관련된 코드
    for(int i = 0; i < n; i++){
        if(i > 0){
            printf(" "); // 공백 출력(구분)
        }
        printf("%d", data[i]);
    }

    delete[] data;
    return 0;
}