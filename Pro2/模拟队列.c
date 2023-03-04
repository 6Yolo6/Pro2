//#include <stdio.h>
//#include <malloc.h>
//
//typedef struct __LOOP_QUEUE {
//    int* base;
//    int* front;
//    int* rear;
//    int  capacity;
//    int  size;
//} LOOP_QUEUE;
//
//// 构造函数，初始化
//// 队列预留n个元素
//void init_queue(LOOP_QUEUE* q, int n) {
//    q->base = (int*)malloc(sizeof(int) * n);
//    q->front = (int*)malloc(sizeof(int) * n);
//    q->rear = (int*)malloc(sizeof(int) * n);
//    if (!q->base)
//        exit(0);
//    *q->front = *q->rear = 0;
//    q->capacity = 0;
//    q->size = n;
//}
//
//// 判断队列是否为空
//int empty_queue(const LOOP_QUEUE* q) {
//    return q->capacity == 0;
//}
//
//// 判断队列是否已满
//int full_queue(const LOOP_QUEUE* q) {
//    return q->capacity == q->size;
//}
//
//// 销毁，回收内存
//void clear_queue(LOOP_QUEUE* q) {
//    free(q->base);
//    free(q->front);
//    free(q->rear);
//    q->base = q->front = q->rear = NULL;
//}
//
//// 进队列，元素值为value
//void in_queue(LOOP_QUEUE* q, int value) {
//    if (full_queue(q))
//        return;
//    q->base[*q->rear] = value;
//    //*q->rear = *q->rear + 1;
//    *q->rear = (*q->rear + 1) % q->size;
//    q->capacity++;
//}
//
//// 获得队头元素的值
//int  front_element(const LOOP_QUEUE* q) {
//    if (!empty_queue(q))
//        return q->base[*q->front];
//    else
//        return 0;
//}
//
//// 出队列
//void out_queue(LOOP_QUEUE* q) {
//    if (empty_queue(q))
//        return;
//    //*q->front = *q->front + 1;
//    *q->front = (*q->front + 1) % q->size;
//    q->capacity--;
//}
//
//int main4227545620() {
//    LOOP_QUEUE queue;
//    int n, m, i;
//    char c;
//    scanf("%d%d", &n, &m);
//    init_queue(&queue, m);
//    while (n--) {
//        getchar();
//        scanf("%c", &c);
//        if (c == 'I') {
//            scanf("%d", &i);
//            in_queue(&queue, i);
//        }
//        else if (c == 'O') {
//            printf("%d\n", front_element(&queue));
//            out_queue(&queue);
//        }
//    }
//    if (empty_queue(&queue))
//        printf("empty\n");
//    else
//        printf("not empty\n");
//    if (full_queue(&queue))
//        printf("full\n");
//    else
//        printf("not full\n");
//
//    //init_queue(&queue, 5);
//    //in_queue(&queue, 1);
//    //in_queue(&queue, 2);
//    //in_queue(&queue, 3);
//    //in_queue(&queue, 4);
//    //printf("%d \n", front_element(&queue));
//    //out_queue(&queue);
//    //printf("%d \n", front_element(&queue));
//    //while (!empty_queue(&queue)) {
//    //    printf("%d ", front_element(&queue));
//    //    out_queue(&queue);
//    //}
//    //clear_queue(&queue);
//    //printf("%d \n", front_element(&queue));
//    return 0;
//}