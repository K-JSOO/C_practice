#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int capacity;
    int* array;
} Stack;

// 스택 구조체 정의
Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity*sizeof(int));
    return stack;
}

// 스택 초기 설정
int isFull(Stack* stack) {
    return stack->top == stack->capacity-1;
}

// 빈 스택 확인
int isEmpty(Stack* stack) {
    return stack->top == -1; // top가 -1이면 stack는 비어있음
}

// 데이터 삽입
void push(Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// 데이터 삭제
int pop(Stack* stack) {
    if (isEmpty(stack)) // 스택이 비었다면
        return -9999; // -9999를 return
    else // 스택이 비어있지 않다면
        return stack->array[stack->top--]; // 스택의 top을 -1 해준다 
}

// 맨 위의 인덱스 데이터 확인
int peek(Stack* stack) {
    if (isEmpty(stack)) // 스택이 비었다면
        return -9999; // -9999을 return
    return stack->array[stack->top]; // 스택의 top를 return
}

int main() {
    Stack* stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);

    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));

    push(stack, 50);
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    return 0;
}
