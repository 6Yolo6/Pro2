//#include <iostream>
//
//using namespace std;
//
//struct STACK{
//    int* base;
//    int* top;
//    int capacity;
//    STACK(int size);
//    ~STACK();
//    void push( int value );
//    int top_element();
//    void pop();
//    bool empty();
//    bool full();
//};
//
//// ���캯������Ӧ���������ʼ��
//// size Ϊջ������
//STACK::STACK(int size) {
//    this->base = new int[size];
//    if (!this->base)
//        exit(0);
//    this->top = this->base;
//    this->capacity = size;
//}
//
////������������Ӧ��������������ٲ���
//STACK::~STACK() {
//    if (this->base) {
//        delete[] this->base;
//        this->capacity = 0;
//        this->top = this->base = nullptr;
//    }
//}
//
//// ѹջ����valueѹ��ջ��
//void STACK::push(int value) {
//    if (full())
//        return;
//    *this->top++ = value;
//    //*top = value;
//    //top++;
//}
//
//// ��ȡջ��Ԫ��
//int STACK::top_element() {
//    return *(this->top - 1);
//}
//
//// ��ջ��Ԫ�ص���
//void STACK::pop() {
//    if (empty())
//        return;
//    --this->top;
//}
//
//// �ж�ջ�Ƿ�Ϊ��
//bool STACK::empty() {
//    return this->top == this->base;
//}
//
//// �ж�ջ�Ƿ�Ϊ��
//bool STACK::full() {
//    return this->top - this->base == this->capacity;
//}
//
//int main215648512() {
//    STACK stk(5);
//    int n;
//    cin >> n;
//    while (n--) {
//        string str;
//        cin >> str;
//        if (0 == str.compare("U")) {
//            int i;
//            cin >> i;
//            stk.push(i);
//        }
//        else if (0 == str.compare("O")) {
//            cout << stk.top_element() << endl;
//            stk.pop();
//        }
//    }
//    if (stk.empty())
//        cout << "empty" << endl;
//    else
//        cout << "not empty" << endl;
//    if (stk.full())
//        cout << "full" << endl;
//    else
//        cout << "not full" << endl;
//	return 0;
//}