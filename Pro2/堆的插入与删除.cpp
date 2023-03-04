//#include <iostream>
//
//using namespace std;
//
//struct HEAP {
//    int* data;
//    int reserved_size;
//    int cur_size;
//    HEAP(int size);
//    void push( int value );
//    int top() const;
//    void pop();
//    void show_content() const;
//};
//
//HEAP::HEAP(int size) {
//    reserved_size = size;
//    cur_size = 0;
//    data = new int[size + 1]();
//    data[0] = -1;
//}
//
//void HEAP::push(int value) {
//    if (cur_size == reserved_size)
//        return;
//    int i = ++cur_size;
//    for (; data[i / 2] > value; i /= 2 ) {
//        data[i] = data[i / 2];
//    }
//    data[i] = value;
//}
//
//int HEAP::top() const {
//    return data[1];
//}
//
//void HEAP::pop() {
//    if (cur_size == 0)
//        return;
//    int min = data[1], num = data[cur_size--];
//    int i, j;
//    for (i = 1; i * 2 <= cur_size; i = j) {
//        j = 2 * i;
//        if (j != cur_size && data[j] > data[j + 1])
//            j++;
//        if (num > data[j])
//            data[i] = data[j];
//        else
//            break;
//    }
//    data[i] = num;
//}
//
//void HEAP::show_content() const {
//    for (int i = 0; i <= cur_size; i++)
//        cout << data[i] << " ";
//    cout << endl;
//}
//
//int main2131542121() {
//    int n;
//    cin >> n;
//    HEAP h(n * 2);
//    for (int i = 0; i < n; ++i) {
//        int a;
//        cin >> a;
//        h.push(a);
//    }
//    h.show_content();
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cout << h.top() << " ";
//        h.pop();
//    }
//    cout << endl;
//    h.show_content();
//    cout << endl;
//    return 0;
//}