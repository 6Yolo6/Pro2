//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct NODE {
//    int value{ 0 };
//    NODE* prev;
//    NODE* next;
//};
//
////����˫����
//NODE* create_list(int n) {
//    NODE* head = new NODE;
//    head->prev = head->next = nullptr;
//    //ѭ������
//    head->prev = head->next = head;
//    NODE* q = head;
//    for (int i = 0; i < n; i++) {
//        NODE* p = new NODE;
//        cin >> p->value;
//        p->prev = p->next = nullptr;
//        //ѭ������
//        p->prev = p->next = head;
//        q->next = p;
//        p->prev = q;
//        q = p;
//    }
//    return head;
//}
////��ӡ
//void display(NODE* header) {
//    //NODE* p = header;
//    //while (p->next != nullptr) {
//    //    p = p->next;
//    //    cout << p->value << " ";
//    //}
//	//while (p->prev != nullptr) {
//	//	cout << p->value << " ";
//	//	p = p->prev;
//	//}
//	//cout << endl;
//    //ѭ������
//    
//    NODE* p = header->next;
//    while (p != header) {
//        cout << p->value << " ";
//        p = p->next;
//    }
//    cout << endl;
//    /* while (p->prev != header) {
//         cout << p->value << " ";
//         p = p->prev;
//     }
//     cout << endl;*/
//}
////����
//NODE* find_node(NODE* header, int value) {
//    NODE* p = header->next;
//    //while (p && p->value != value) {
//    //    p = p->next;
//    //}
//    //ѭ������
//    while (p != header && p->value != value) {
//        p = p->next;
//    }
//    if (p != header)
//        return p;
//    else
//        return nullptr;
//}
////�ں������
//void insert_after(NODE* node, int value) {
//    if (node == nullptr)
//        return;
//    NODE* p = new NODE;
//    p->value = value;
//    p->prev = node;
//    p->next = node->next;
//    node->next->prev = p;
//    node->next = p;
//}
////��ǰ�����
//void insert_before(NODE* node, int value) {
//    if (node == nullptr)
//        return;
//    NODE* p = new NODE;
//    p->value = value;
//    p->prev = node->prev;
//    node->prev->next = p;
//    p->next = node;
//    node->prev = p;
//    //p->next = node;
//    //p->prev = node->prev;
//    //p->prev->next = p;
//    //node->prev = p;
//}
////ɾ���ڵ�
//void remove_node(NODE* node) {
//    if (node == nullptr)
//        return;
//    node->prev->next = node->next;
//    node->next->prev = node->prev;
//    delete node;
//}
////��������
//void destroy_list(NODE* header) {
//    //if (header) {
//    //    destroy_list(header->next);
//    //    delete header;
//    //}
//    //ѭ������
//    NODE* p = header;
//    while (p->next != header) {
//        remove_node(p->next);
//    }
//}
////���������
//void hit_zuma_chain(NODE* head, NODE* node) {   
//    int cnt = 1;
//    NODE* p = node, * prev = node->prev, * next = node->next;
//    while (p != head) {
//        while (prev != head && prev->value == p->value) {
//            cnt++;
//            prev = prev->prev;
//        }
//        while (next != head && next->value == p->value) {
//            cnt++;
//            next = next->next;
//        }
//        if (cnt >= 3) {
//            while (prev->next->value != next->value) 
//                remove_node(prev->next);
//            prev->next = next;
//            next->prev = prev;
//            cnt = 0;
//            p = prev;
//        }
//        else {
//            p = p->next;
//        }
//        if (prev->value != next->value)
//            return;
//    }
//}
//int main2454231231() {
//    NODE* p = create_list(9);
//    hit_zuma_chain(p, find_node(p, 2));
//    display(p);
//    //insert_after(find_node(p, 3), 8);
//    //display(p);
//    //insert_before(find_node(p, 3), 9);
//    //display(p);
//    //remove_node(find_node(p, 3));
//    //display(p);
//    //destroy_list(p);
//    //display(p);
//    return 0;
//}