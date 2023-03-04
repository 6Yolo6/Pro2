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
//// 构造函数，你应该在这里初始化
//// size 为栈的容量
//STACK::STACK(int size) {
//    this->base = new int[size];
//    if (!this->base)
//        exit(0);
//    this->top = this->base;
//    this->capacity = size;
//}
//
////析构函数，你应该在这里进行销毁操作
//STACK::~STACK() {
//    if (this->base) {
//        delete[] this->base;
//        this->capacity = 0;
//        this->top = this->base = nullptr;
//    }
//}
//
//// 压栈，把value压入栈中
//void STACK::push(int value) {
//    if (full())
//        return;
//    *this->top++ = value;
//    //*top = value;
//    //top++;
//}
//
//// 获取栈顶元素
//int STACK::top_element() {
//    return *(this->top - 1);
//}
//
//// 将栈顶元素弹出
//void STACK::pop() {
//    if (empty())
//        return;
//    --this->top;
//}
//
//// 判断栈是否为空
//bool STACK::empty() {
//    return this->top == this->base;
//}
//
//// 判断栈是否为满
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