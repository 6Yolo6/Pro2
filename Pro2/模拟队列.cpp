//#include <iostream>
//
//using namespace std;
//
//struct LOOP_QUEUE {
//    int* base;
//    int* front;
//    int* rear;
//    int  capacity;
//    int  size;
//    LOOP_QUEUE( int n );
//    ~LOOP_QUEUE();
//    void in( int value );
//    int  front_element() const;
//    void out();
//    bool empty() const;
//    bool full() const;
//};
//
//// 构造函数，初始化
//// 队列预留n个元素
//LOOP_QUEUE::LOOP_QUEUE(int n) {
//    this->base = new int[n];
//    this->rear = new int[n];
//    this->front = new int[n];
//    if (!this->base)
//        exit(0);
//    *this->front = *this->rear = 0;
//    this->capacity = 0;
//    this->size = n;
//}
//
//// 判断队列是否为空
//bool LOOP_QUEUE::empty() const {
//    return this->capacity == 0;
//}
//
//// 判断队列是否已满
//bool LOOP_QUEUE::full() const {
//    return this->capacity == this->size;
//}
//
//// 销毁，回收内存
//LOOP_QUEUE::~LOOP_QUEUE() {
//    if (this->base) {
//        delete[] this->base;
//        delete[] this->rear;
//        delete[] this->front;
//        this->front = this->rear = this->base= NULL;
//    }
//}
//
//// 进队列，元素值为value
//void LOOP_QUEUE::in(int value) {
//    if (full())
//        return;
//    this->base[*this->rear] = value;
//    //*this->rear = *this->rear + 1;
//    *this->rear = (*this->rear + 1) % this->size;
//    this->capacity++;
//}
//
//// 获得队头元素的值
//int  LOOP_QUEUE::front_element() const {
//    if (!empty())
//        return this->base[*this->front];
//    else
//        return 0;
//}
//
//// 出队列
//void LOOP_QUEUE::out() {
//    if (empty())
//        return;
//    //*this->front = *this->front + 1;
//    *this->front = (*this->front + 1) % this->size;
//    this->capacity--;
//}
//
//int main23562130() {
//    int n, m;
//    cin >> n >> m;
//    LOOP_QUEUE q(m);
//    while (n--) {
//        string str;
//        cin >> str;
//        if (0 == str.compare("I")) {
//            int i;
//            cin >> i;
//            q.in(i);
//        }
//        else if (0 == str.compare("O")) {
//            cout << q.front_element() << endl;
//            q.out();
//        }
//    }
//    if (q.empty())
//        cout << "empty" << endl;
//    else
//        cout << "not empty" << endl;
//    if (q.full())
//        cout << "full" << endl;
//    else
//        cout << "not full" << endl;
//    return 0;
//}