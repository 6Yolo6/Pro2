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
//// ���캯������ʼ��
//// ����Ԥ��n��Ԫ��
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
//// �ж϶����Ƿ�Ϊ��
//bool LOOP_QUEUE::empty() const {
//    return this->capacity == 0;
//}
//
//// �ж϶����Ƿ�����
//bool LOOP_QUEUE::full() const {
//    return this->capacity == this->size;
//}
//
//// ���٣������ڴ�
//LOOP_QUEUE::~LOOP_QUEUE() {
//    if (this->base) {
//        delete[] this->base;
//        delete[] this->rear;
//        delete[] this->front;
//        this->front = this->rear = this->base= NULL;
//    }
//}
//
//// �����У�Ԫ��ֵΪvalue
//void LOOP_QUEUE::in(int value) {
//    if (full())
//        return;
//    this->base[*this->rear] = value;
//    //*this->rear = *this->rear + 1;
//    *this->rear = (*this->rear + 1) % this->size;
//    this->capacity++;
//}
//
//// ��ö�ͷԪ�ص�ֵ
//int  LOOP_QUEUE::front_element() const {
//    if (!empty())
//        return this->base[*this->front];
//    else
//        return 0;
//}
//
//// ������
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