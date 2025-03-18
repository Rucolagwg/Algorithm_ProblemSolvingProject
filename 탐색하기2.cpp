#include <stdio.h>
#include <string> // string 헤더 추가
#include <iostream>
#define CRT_SCANF_NO_WARNINGS
using namespace std;

void printIndexes(string school[], int n){
    int first = -1;
    int last = -1;

    for(int i = 0; i < n; i++){
        if(school[i] == "AJOU"){
            if(first == -1)
                first = i+1; // first가 -1이면 처음으로 AJOU를 만난 것이므로 first에 i+1을 저장
            last = i+1; // AJOU를 만날 때마다 last에 i+1을 저장 (주의. first, last 모두 -1로 초기화 되어있으므로 i+1로 저장한다.)
        }
    }

    printf("%d %d\n", first, last);
}

int main(){
    int n;
    char buff[11]; //char 배열 추가. 1부터 10글자까지의 문자열을 받기 위함. NULL문자까지 포함해야 하므로 10이 아닌, 11
    string* school;

    scanf("%d", &n);
    school = new string[n];

    for(int i = 0; i < n; i++){
        scanf("%s", buff); // %s로 문자열을 받음
        school[i] = buff; // 받은 문자열을 school[i]에 저장
    }

    printIndexes(school, n);

    delete[] school;
    return 0;
}