#include <stdio.h>

int main() {
    int arr[6][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},
                   {16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30}};
    int n1 = sizeof(arr[0])/sizeof(int);
    int n2 = sizeof(arr)/sizeof(arr[0]);
    int i, j;

    for (i=n2-1; i>=0; i--) {
        for (j=0; j<n1; j++) {
            printf("%d\t",*(*(arr+i)+j));
        }
        printf("\n");
    }
}
