//#include <stdio.h>
//#include <malloc.h>
//
//#define SIZE 10
//
//typedef struct __STACK{
//    int*    base;
//    int*    top;
//    int     capacity;
//} STACK;
//
//// ��ʼ����sΪ����ʼ��ָ�룬sizeΪ�ߴ�
//void init_stack(STACK* s, int size) {
//    s->base = (int *)malloc(sizeof(int) * size);
//    if (!s->base)
//        exit(0);
//    s->top = s->base;
//    s->capacity = size;
//}
//
//// ����s
//void cleanup_stack(STACK* s) {
//    if (s->base) {
//        free(s->base);
//        s->capacity = 0;
//        s->base = s->top = NULL;
//    }
//}
//
//// �ж�s�Ƿ�����
//int full_stack(STACK* s) {
//    return s->top - s->base == s->capacity;
//}
//
//// ��ջs��ѹ��value 
//void push_stack(STACK* s, int value) {
//    if (full_stack(s)) {
//        s->base = (int*)realloc(s->base, (s->capacity + SIZE) * sizeof(int));
//        if (!s->base)
//            exit(0);
//        s->top = s->base + s->capacity;
//        s->capacity += SIZE;
//    }
//    *s->top = value;
//    s->top++;
//}
//
//// �ж�s�Ƿ�Ϊ��
//int empty_stack(STACK* s) {
//    return s->top == s->base;
//}
//
//// ȡ��s�Ķ���Ԫ�ص�ֵ
//int top_stack(STACK* s) {
//    return *(s->top - 1);
//}
//
//// ����s��ջ��Ԫ��
//void pop_stack(STACK* s) {
//    if (empty_stack(s))
//        return;
//    --s->top;
//}
//
//int main25421652() {
//    STACK s;
//    init_stack(&s, 5);
//    int n, i;
//    char c;
//    scanf("%d", &n);
//    while (n--) {
//        getchar();
//        scanf("%c", &c);
//        if (c == 'U') {
//            scanf("%d", &i);
//            push_stack(&s, i);
//        }
//        else if (c == 'O') {
//            printf("%d\n", top_stack(&s));
//            pop_stack(&s);
//        }
//    }
//    if (empty_stack(&s))
//        printf("empty\n");
//    else
//        printf("not empty\n");
//    if (full_stack(&s))
//        printf("full\n");
//    else
//        printf("not full\n");
//    //init_stack(&s, 5);
//    //push_stack(&s, 1);
//    //push_stack(&s, 2);
//    //push_stack(&s, 3);
//    //push_stack(&s, 4);
//    //push_stack(&s, 5);
//    //printf("%d\n", top_stack(&s));
//    //pop_stack(&s);
//    //while (!empty_stack(&s)) {
//    //    printf("%d ", top_stack(&s));
//    //    pop_stack(&s);
//    //}
//    //printf("\n");
//    //cleanup_stack(&s);
//    //printf("%d\n", top_stack(&s));
//    return 0;
//}
//
