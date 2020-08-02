#include <stdio.h>

int *sort_num(int num[]);

const int ARR_COUNT = 5;
int ARR[ARR_COUNT] = {1,2,3,4,5};

int main(void) {
    const int *arr=sort_num(ARR);

    int n = sizeof(ARR)/sizeof(int); // 배열의 크기를 구하기 위해 ARR의 바이트/int의 바이트 실행
    // 메모리상에서 int는 4바이트를 차지한다 ARR은 5개의 원소가 있으므로 4*5=20 바이트이므로 int의 바이트인 4로 나눠주는 것이다
    int median;

    if (n%2==1) {  // ARR의 개수가 홀수개라면
        median=arr[(n-1)/2]; 
    }
    else {
        median=(arr[(n/2)-1]+arr[n/2])/2;
        median+=0.5; // int은 내림하는 숫자형이다 따라서 0.5를 더해줘서 반올림화 시켜준다
    }
    printf("%d\n",median);
}

int *sort_num(int num[]) {  // 버블알고리즘을 사용하여 순서 정렬하는 함수
    int i,j,temp;

    for (i=0; i<ARR_COUNT; i++) {
        for (j=0; j<(ARR_COUNT-i-1); j++) {
            if (num[j]>num[j+1]) {  // num[j]가 num[j+1]보다 크다면
                temp=num[j]; // temp 변수에 num[i] 저장
                num[j]=num[j+1]; // num[j]는 num[j+1]로 변경
                num[j+1]=temp; // num[j+1]은 temp로 변경
            }
        }
    }
    return num;
}

