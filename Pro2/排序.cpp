//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// ‰≥ˆ
//void print(vector<int>& num) {
//	for (int i = 0; i < num.size(); i++)
//		cout << num[i] << " ";
//	cout << endl;
//}
//
////—°‘Ò≈≈–Ú
//void selection_sort(vector<int>& num) {
//	int k = num.size() - 1;
//	for (int i = 0; i < num.size() - 1; i++) {
//		int max = 0;
//		for (int j = 0; j <= k; j++)
//			if (num[j] > num[max])
//				max = j;
//		swap(num[k], num[max]);
//		print(num);
//		k--;
//	}
//}
//
////√∞≈›≈≈–Ú
//void bubble_sort(vector<int>& num) {
//	int n = 0;
//	for (int i = num.size() - 1; i > 0; i--) {
//		int flag = 0;
//		for (int j = 0; j < i; j++) {
//			if (num[j] > num[j + 1]) {
//				swap(num[j], num[j + 1]);
//				flag = 1;
//			}
//		}
//		print(num);
//		if (flag == 0)
//			break;
//	}
//
//	//bool flag = false;
//	//int n = 0;
//	//int max = num.size() - 1;
//	//for (int i = 0; i < num.size() - 1; i++) {
//	//	flag = true;
//	//	for (int j = 0; j < max; j++) {
//	//		if (num[j]> num[j + 1]) {
//	//			swap(num[j], num[j + 1]);
//	//			flag = false;
//	//			n = j;
//	//		}
//	//	}
//	//	print(num);
//	//	max = n;
//	//	if (flag)
//	//		break;
//	//}
//}
//
////≤Â»Î≈≈–Ú
//void insertion_sort(vector<int>& num) {
//	int flag = 0;
//	for (int i = 0; i < num.size(); i++) {
//		flag = 0;
//		int n = num[i];
//		int j = i - 1;
//		while (j >= 0 && n < num[j]) {
//			num[j + 1] = num[j];
//			j--;
//			flag = 1;
//		}
//		num[j + 1] = n;
//		if (flag == 1)
//			print(num);
//	}
//	if (flag == 0)
//		print(num);
//}
//
////œ£∂˚≈≈–Ú
//void shell_sort(vector<int>& num) {
//	int n = 1;
//	while (n < num.size() / 3)
//		n  = 3 * n + 1;
//	while (n >= 1) {
//		for (int i = n; i < num.size(); i++)
//			for (int j = i; j >= n && num[j] < num[j - n]; j -= n)
//				swap(num[j], num[j - n]);
//		n /= 3;
//		print(num);
//	}
//}
//
//int quick(vector<int>& num, int begin, int end) {
//	int n = num[begin];
//	while (begin < end) {
//		while (begin < end && num[end] >= n)
//			end--;
//		num[begin] = num[end];
//		while (begin < end && num[begin] <= n)
//			begin++;
//		num[end] = num[begin];
//	}
//	num[begin] = n;
//	return begin;
//}
//
////øÏÀŸ≈≈–Ú
//void quick_sort(vector<int>& num, int begin, int end) {
//	//if (begin < end) {
//	//	int n = quick(num, begin, end - 1);
//	//	if (end - begin > 2) {
//	//		for (int i = begin; i < end; i++)
//	//			cout << num[i] << " ";
//	//		cout << endl;
//	//	}
//	//	quick_sort(num, begin, n - 1);
//	//	quick_sort(num, n + 1, end);
//	//}
//	
//	if (begin > end)
//		return;
//	int tmp = num[begin];
//	int i = begin;
//	int j = end;
//	while (i != j) {
//		while (num[j] >= tmp && j > i)
//			j--;
//		while (num[i] <= tmp && j > i)
//			i++;
//		if (j > i)
//			swap(num[i], num[j]);
//	}
//	num[begin] = num[i];
//	num[i] = tmp;
//	if (end - begin >= 2) {
//		for (int i = begin; i <= end; i++)
//			cout << num[i] << " ";
//		cout << endl;
//	}
//	quick_sort(num, begin, i - 1);
//	quick_sort(num, i + 1, end);
//
//	//if (begin < end) {
//	//	int key = num[begin];
//	//	int i = begin;
//	//	int j = end;
//	//	while (i < j) {
//	//		while (i < j && num[j] > key) 
//	//			j--;
//	//		if (i < j) 
//	//			num[i++] = num[j];
//	//		while (i < j && num[i] < key) 
//	//			i++;
//	//		if (i < j) 
//	//			num[j--] = num[i];
//	//	}
//	//	num[i] = key;
//	//	if (end - begin >= 2) {
//	//		for (int i = begin; i <= end; i++)
//	//			cout << num[i] << " ";
//	//		cout << endl;
//	//	}
//	//	quick_sort(num, begin, i - 1);
//	//	quick_sort(num, i + 1, end);
//	//}
//}
//
////¥Û∂•∂—
//void max_heap(vector<int>& num, int start, int end) {
//	int dad = start;
//	int son = dad * 2 + 1;
//	while (son <= end) { 
//		if (son + 1 <= end && num[son] < num[son + 1]) 
//			son++;
//		if (num[dad] > num[son]) 
//			return;
//		else { 
//			swap(num[dad], num[son]);
//			dad = son;
//			son = dad * 2 + 1;
//		}
//	}
//}
//
////∂—≈≈–Ú
//void heap_sort(vector<int>& num, int len) {
//	for (int i = len / 2 - 1; i >= 0; i--) {
//		max_heap(num, i, len - 1);
//	}
//	print(num);
//	for (int i = len - 1; i > 0; i--) {
//		swap(num[0], num[i]);
//		max_heap(num, 0, i - 1);
//		print(num);
//	}
//}
//
//void merge(vector<int>& num, int begin, int* reg, int end) {
//	if (begin >= end)
//		return;
//	int len = end - begin, mid = (len >> 1) + begin;
//	int start1 = begin, end1 = mid;
//	int start2 = mid + 1, end2 = end;
//	merge(num, start1, reg, end1);
//	merge(num, start2, reg, end2);
//	int k = begin;
//	while (start1 <= end1 && start2 <= end2)
//		reg[k++] = num[start1] < num[start2] ? num[start1++] : num[start2++];
//	while (start1 <= end1)
//		reg[k++] = num[start1++];
//	while (start2 <= end2)
//		reg[k++] = num[start2++];
//	for (k = begin; k <= end; k++)
//		num[k] = reg[k];
//	for (int i = 0; i < num.size(); i++) {
//		cout << num[i] << " ";
//	}
//	cout << endl;
//}
//
////πÈ≤¢≈≈–Ú
//void merge_sort(/*vector<int>& num*/int* num, int len) {
//	//if (begin >= end)
//	//	return;
//	//int mid = (begin + end) / 2;
//	//print(num);
//	//merge_sort(num, begin, mid);
//	//merge_sort(num, mid + 1, end);
//	//merge(num, begin, mid, end);
//
//	//int* reg = new int[len];
//	//merge(num, 0, reg, len - 1);
//
//	int* a = num;
//	int* b = new int[len];
//	for (int seg = 1; seg < len; seg += seg) {
//		for (int start = 0; start < len; start += seg + seg) {
//			int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
//			int k = low;
//			int start1 = low, end1 = mid;
//			int start2 = mid, end2 = high;
//			while (start1 < end1 && start2 < end2)
//				b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
//			while (start1 < end1)
//				b[k++] = a[start1++];
//			while (start2 < end2)
//				b[k++] = a[start2++];
//		}
//		int* temp = a;
//		a = b;
//		b = temp;
//		for (int i = 0; i < len; i++) {
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//	if (a != num) {
//		for (int i = 0; i < len; i++)
//			visit[i] = a[i];
//		b = a;
//	}
//	delete[] b;
//}
//
//int main() {
//	int n, j;
//	cin >> n;
//	vector <int> num;
//	int* m = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> j;
//		num.push_back(j);
//		m[i] = j;
//	}
//	//selection_sort(num);
//	//bubble_sort(num);
//	//insertion_sort(num);
//	//shell_sort(num);
//	//quick_sort(num, 0, num.size() - 1);
//	merge_sort(m, n);
//	//merge_sort(num, num.size());
//	//heap_sort(num, n);
//	//delete[] m;
//	return 0;
//}