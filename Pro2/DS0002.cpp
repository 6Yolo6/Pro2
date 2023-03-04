//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//
//
//
//
//struct SEQUENCE {
//    int reserved_size{ 0 }; // 总体分配的空间
//    int size{ 0 }; // 当前分配的空间
//    int* data{ nullptr }; // 指向分配空间的指针
//};
//
//
//
//void append_sequence(SEQUENCE& seq, int value) { // 添加到表的尾部
//    seq.data[seq.size++] = value;
//}
//
//int search_value(SEQUENCE& seq, int value) { // 寻找值为value的元素的下标
//    for (int i = 0; seq.data[i]; i++) {
//        if (seq.data[i] == value) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void insert_into(SEQUENCE& seq, int index, int value) { // 在index位置插入value
//    for (int i = seq.size; i > index; i--) {
//        seq.data[i] = seq.data[i - 1];
//    }
//    seq.data[index] = value;
//    seq.size++;
//}
//
//void remove_element(SEQUENCE& seq, int index) { // 删除index处的元素
//    int i;
//    for (i = index; seq.data[i]; i++) {
//        seq.data[i] = seq.data[i + 1];
//    }
//    seq.size--;
//}
//
//int main0002() {
//    SEQUENCE seq;
//    int m, n;
//    int a[1005] = { 0 }, b[1005] = { 0 }, c[1005] = { 0 };
//    string msg;
//    seq.data = a;
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        cin >> a[i];
//        append_sequence(seq, a[i]);
//        visit[i] = a[i];
//    }
//    cin >> n;
//    int index = 0, value;
//    for (int j = 0; j < n; j++) {
//        cin >> msg;
//        if (0 == msg.compare("I")) {
//            cin >> index >> value;
//            insert_into(seq, index, value);
//            for (int i = 0; a[i]; i++) {
//                c[i] = a[i];
//            }
//        }
//        else if (0 == msg.compare("D")) {
//            cin >> index;
//            remove_element(seq, index);
//        }
//        else if (0 == msg.compare("S")) {
//            cin >> value;
//            index = search_value(seq, value);
//        }
//    }
//    for (int i = 0; visit[i]; i++) {
//        cout << visit[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; c[i]; i++) {
//        cout << c[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; a[i]; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    cout << index << endl;
//    return 0;
//}