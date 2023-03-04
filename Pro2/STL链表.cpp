//#include <iostream>
//#include <list>
//#include <algorithm>
//
//using namespace std;
//
//
//int main35659842() {
//	const list<int> l1{ 1,2,3,4,5 };
//	list<int> l1_(l1);
//	list<int>::iterator l;
//	for (l = l1_.begin(); l != l1_.end(); l++)
//		cout << *l << " ";
//	cout << endl;
//	l1_.remove(3);
//	const list<int> l2{ 2,4,6,7 };
//	list<int> l2_(l2);
//	for (l = l2_.begin(); l != l2_.end(); l++)
//		cout << *l << " ";
//	cout << endl;
//	//l1_.merge(l2_);
//	for (l = l2_.begin(); l != l2_.end(); l++) {
//		if (l1_.end() == find(l1_.begin(), l1_.end(), *l))
//			l1_.push_back(*l);
//	}
//	for (l = l1_.begin(); l != l1_.end(); l++)
//		cout << *l << " ";
//	return 0;
//}