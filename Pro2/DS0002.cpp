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
//    int reserved_size{ 0 }; // �������Ŀռ�
//    int size{ 0 }; // ��ǰ����Ŀռ�
//    int* data{ nullptr }; // ָ�����ռ��ָ��
//};
//
//
//
//void append_sequence(SEQUENCE& seq, int value) { // ��ӵ����β��
//    seq.data[seq.size++] = value;
//}
//
//int search_value(SEQUENCE& seq, int value) { // Ѱ��ֵΪvalue��Ԫ�ص��±�
//    for (int i = 0; seq.data[i]; i++) {
//        if (seq.data[i] == value) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void insert_into(SEQUENCE& seq, int index, int value) { // ��indexλ�ò���value
//    for (int i = seq.size; i > index; i--) {
//        seq.data[i] = seq.data[i - 1];
//    }
//    seq.data[index] = value;
//    seq.size++;
//}
//
//void remove_element(SEQUENCE& seq, int index) { // ɾ��index����Ԫ��
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