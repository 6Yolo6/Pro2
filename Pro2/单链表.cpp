//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//class NODE {
//public:
//	int value;
//	NODE* next;
//};
//
////创建单链表
//NODE* create_list(int n) {
//	NODE* head = new NODE;
//	NODE* pre = head;
//	pre->next = nullptr;
//	for (int i = 0; i < n; i++) {
//		NODE* p = new NODE;
//		cin >> p->value;
//		//头插
//		//p->next = pre->next;
//		//pre->next = p;
//		//尾插
//		pre->next = p;
//		pre = p;
//		p->next = nullptr;
//		/*NODE* end = nullptr;
//		end = pre;
//		p->next = nullptr;
//		while (end->next != nullptr)
//			end = end->next;
//		end->next = p;*/
//	}
//	return head;
//}
//NODE* create_list(int* data, int size) {
//	NODE* head = new NODE;
//	NODE* pre = head;
//	for (int i = 0; i < size; i++) {
//		NODE* p = new NODE;
//		p->value = data[i];
//		//头插
//		//p->next = pre->next;
//		//pre->next = p;
//		//尾插
//		pre->next = p;
//		pre = p;
//		p->next = nullptr;
//	}
//	return head;
//}
////打印链表 
//void display(NODE* head) {
//	NODE* p = head->next;
//	while (p != nullptr) {
//		cout << p->value << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
////销毁链表
//void destroy_list(NODE* header) {
//	if (header) {
//		destroy_list(header->next);
//		delete header;
//	}
//}
////链表的逆置 
//NODE* reverse(NODE* head) {
//	NODE* flag = head;
//	NODE* first, * second;
//	first = flag->next;
//	flag->next = nullptr;
//	while (first != nullptr) {
//		second = first->next;
//		first->next = flag->next;
//		flag->next = first;
//		first = second;
//	}
//	return flag;
//}
////合并去重
//NODE* list_union(NODE* list1, NODE* list2) {
//	NODE* p = nullptr;
//	NODE* q = nullptr;
//	NODE* r = nullptr;
//	NODE* head = new NODE;
//	NODE* pre = head;
//	p = list1->next;
//	while (p)
//	{
//		NODE* t = new NODE;
//		t->value = p->value;
//		pre->next = t;
//		pre = t;
//		t->next = nullptr;
//		p = p->next;
//	}
//	p = list2->next;
//	while (p)
//	{
//		NODE* t = new NODE;
//		t->value = p->value;
//		pre->next = t;
//		pre = t;
//		t->next = nullptr;
//		p = p->next;
//	}
//	p = head->next;
//	while (p)
//	{
//		q = p;
//		while (q->next)				
//		{
//			if (q->next->value == p->value)	
//			{
//				r = q->next;
//				q->next = r->next;
//				delete r;
//			}
//			else 
//				q = q->next;
//		}
//		p = p->next;
//	}
//	return head;
//}
////有序合并不去重
//NODE* list_union1(NODE* list1, NODE* list2) {
//	NODE* p = list1->next;
//	NODE* q = list2->next;
//	NODE* head = new NODE;
//	NODE* r = head;
//	while (p && q) {
//		if (p->value <= q->value) {
//			NODE* s = new NODE;
//			s->value = p->value;
//			r->next = s;
//			r = s;
//			s->next = nullptr;
//			p = p->next;
//		}
//		else {
//			NODE* s = new NODE;
//			s->value = q->value;
//			r->next = s;
//			r = s;
//			s->next = nullptr;
//			q = q->next;
//		}
//	}
//	if (!p) {
//		while (q) {
//			NODE* s = new NODE;
//			s->value = q->value;
//			r->next = s;
//			r = s;
//			s->next = nullptr;
//			q = q->next;
//		}
//	}
//	else if (!q) {
//		while (p) {
//			NODE* s = new NODE;
//			s->value = p->value;
//			r->next = s;
//			r = s;
//			s->next = nullptr;
//			p = p->next;
//		}
//	}
//	return head;
//	/*int i = 0,  a[50] = { 0 };
//	NODE* p = list1->next;
//	while (p) {
//		a[i++] = p->value; 
//		p = p->next;
//	}
//	p = list2->next;
//	while (p) {
//		a[i++] = p->value;
//		p = p->next;
//	}
//	sort(a, a + i);
//	NODE* head = new NODE;
//	NODE* pre = head;
//	for (int j = 0; j < i; j++) 
//	{
//		NODE* t = new NODE;
//		t->value = a[j];
//		pre->next = t;
//		pre = t;
//		t->next = nullptr;
//	}
//	return head;*/
//}
//// 搜索节点
//NODE* find_node(NODE* header, int value) { 
//	NODE* p = header->next;
//	while (p && p->value != value)
//		p = p->next;
//	if (p)
//		return p;
//	else {
//		cout << "no found" << endl;
//		return nullptr;
//	}
//	/*while (p) {
//		if (value == p->value)
//			return p;
//		p = p->next;
//	}
//	return nullptr;*/
//}
////搜索node的前驱节点
//NODE* find_pre_node(NODE* header, NODE* node) {
//	NODE* p = header;
//	while (p->next != node) {
//		p = p->next;
//	}
//	return p;
//}
//// 插入节点node的后面。
//void insert_after(NODE* node, int value) { 
//	NODE* p = new NODE;
//	p->value = value;
//	p->next = node->next;
//	node->next = p;
//}
//// 在节点node的前面插入
//void insert_before(NODE* header, NODE* node, int value) { 
//	insert_after(find_pre_node(header, node), value);
//	//NODE* p = new NODE;	
//	//NODE* front = header;
//	//while (front->next != node) {
//	//	front = front->next;
//	//}
//	//p->value = value;
//	//p->next = front->next;
//	//front->next = p;
//}
//
//// 移除节点node
//void remove_node(NODE* header, NODE* node) { 
//	NODE* q = nullptr;
//	NODE* r = header;
//	while (r && r != node) {
//		q = r;
//		r = r->next;
//	}
//	q->next = r->next;
//	delete r;
//}
//
//// 移除值为value的所有节点
//void remove_value(NODE* head, int value) {
//	NODE* p = head->next, * q = nullptr, * r = head;
//	while (p && p->value != value) 
//		p = p->next;
//	if (p) {
//		while (r && r != p) {
//			q = r;
//			r = r->next;
//		}
//		q->next = r->next;
//		delete r;
//		remove_value(q, value);
//	}
//	else
//		return;
//}
//
//int main32152541122() {
//	NODE* p = create_list(5);
//	//int data[5] = { 1, 2, 3, 4, 5 };
//	//NODE* p = create_list(data, 5);
//	//NODE* q = create_list(5);
//	//display(p);
//	//display(q);
//	//cout << find_pre_node(p, find_node(p, 3))->value << endl;
//	//display(list_union(p, q));
//	//display(list_union1(p, q));
//	//insert_after(find_node(p, 3), 8);
//	//remove_value(p, 2);
//	display(p);
//	insert_before(p, find_node(p, 3), 9);
//	display(p);
//	remove_node(p, find_node(p, 3));
//	display(p);
//	destroy_list(p);
//	return 0;
//}
