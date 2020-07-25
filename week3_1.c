#include <cs50.h>
#include <stdio.h>
#include <string.h>


const int GRADE=9;
const int SCORE[GRADE]={95,90,85,80,75,70,65,60,0};
const char *GRADES[GRADE]={"A+","A","B+","B","C+","C","D+","D","F"}; // *(포인터) : 메모리 주소값을 저장할 수 있는 자료형

int main(void) {
    while (true) {
        int stu_score = get_int("성적을 입력하세요.(0~100) : "); // 성적 입력

        if (stu_score==-1) { // 만약 입력된 성적이 -1이라면
            printf("학점 프로그램을 종료합니다.\n"); 
            break; // loop 종료
        }
        else {      // 0<=stu_score<=100은 오류 남 따로 작성 &&(and), ||(or) 
            if ((0<=stu_score)&&(stu_score<=100)) { // 만약 성적이 0~100 사이라면
                for (int i=0; i<GRADE; i++) { // grade 수 만큼 loop를 돌림
                    if ((i==0)||(i==GRADE-1)) { // i가 0번째 인덱스 or 마지막 인덱스라면
                        if (stu_score>SCORE[0]) { // 성적이 0번째 인덱스보다 크다면
                            printf("학점은 %s입니다.\n",GRADES[0]);
                            break;
                        } 
                        else if (stu_score<SCORE[GRADE-2]) { // 성적이 끝에서 두번째 인덱스 보다 작다면(59~0)
                            printf("학점은 %s입니다.\n",GRADES[GRADE-1]);
                            break;
                        }
                        }
                    else {
                        if ((stu_score<=SCORE[i])&&(SCORE[i+1]<stu_score)) { // 만약 성적이 해당 구간이라면
                            printf("학점은 %s입니다.\n",GRADES[i]);
                            break;
                        }
                    }
                }
            }
            else { // 입력한 성적이 0~100사이가 아니라면
                printf("성적을 올바르게 입력하세요!(0~100)\n");
            }
        }
    }
}
