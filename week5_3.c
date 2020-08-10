#include <stdio.h>

void sort(int N, int *arr);

int main() {
    const int N=7;
    int arr[N]={0, 25, 10, 17, 6, 12, 9};
    sort(N,arr);
}

void sort(int N, int *arr) {  
    int i,j,temp;

    for (i=0; i<N; i++) {
        for (j=0; j<N-1; j++) {
            if (*(arr+j)>*(arr+j+1)) {
                temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
    for (i=0; i<N; i++) {
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}
