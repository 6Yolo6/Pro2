//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//int get_num(int m, int n)
//{
//	if (n == m || 0 == m || 0 == n) 
//		return 1;
//	if (1 == n) 
//		return m;
//	return (get_num(m - 1, n - 1) + get_num(m, n - 1));
//}
//
//int get_sum(string str)
//{
//	int sum = 0;
//	int length = str.length();
//	if (1 == length)
//		return (str[0] - 'a' + 1);
//	else if (length > 1) {
//		for (int i = 0; i < length; i++) {
//			int lastCh = 0;
//			if (i != 0) {
//				sum += get_num(i, 26);
//				lastCh = str[i - 1] - 'a' + 1;
//			}
//			sum += get_num(length - i, 26 - lastCh) - get_num(length - i, 26 - (str[i] - 'a'));
//		}
//	}
//	return sum + 1;
//}
//
//int main32131545() {
//	ifstream fread("ENCODE.IN");
//	ofstream fwrite("ANSWER.OUT");
//	if (fread.fail() || fwrite.fail()) {
//		cout << "打开文件失败" << endl;
//		exit(0);
//	}
//	int n = 0;
//	fread >> n;
//	cout << n << endl;
//	for (int i = 0; i < n; i++) {
//		string input;
//		fread >> input;
//		cout << input << " : ";
//		int sum = get_sum(input);
//		fwrite << sum << endl;
//		cout << sum << endl;
//	}
//	return 0;
//}
//
