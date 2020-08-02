#include <stdio.h>

int *sort_num(int num[]);  // 함수 sort_num 선언

const int NUM_COUNT = 5;
int NUM1[NUM_COUNT] = {1,3,1,3,2};
int NUM2[NUM_COUNT] = {2,1,1,3,1};

int main(void) {
    const int *num1=sort_num(NUM1); // '배열=배열'로 선언하면 오류남 
    const int *num2=sort_num(NUM2); // 따라서 num2(변수)=sort_num(NUM2)(배열)로 선언

    int count=0;
    for (int i=0; i<NUM_COUNT; i++) {
        if (num1[i] == num2[i]) {
            continue;
        }
        else { // num1[i]와 num2[i]가 같지 않으면 count에 +1
            //printf("NUM1 : %d, NUM2 : %d\n",num1[i],num2[i]); // num1,num2 변수값 확인
            count+=1;
        } 
    }
    if (count==0) printf("True\n"); // 완전히 똑같다면 count는 0일 것 따라서 count가 0이면 true
    else printf("False\n"); // 0이 아니면 false
}

int *sort_num(int num[]) {  // 버블알고리즘을 사용하여 순서 정렬하는 함수
    int i,j,temp;

    for (i=0; i<NUM_COUNT; i++) {
        for (j=0; j<(NUM_COUNT-i-1); j++) {
            if (num[j]>num[j+1]) {  // num[j]가 num[j+1]보다 크다면
                temp=num[j]; // temp 변수에 num[i] 저장
                num[j]=num[j+1]; // num[j]는 num[j+1]로 변경
                num[j+1]=temp; // num[j+1]은 temp로 변경
            }
        }
    }
    return num;
}
