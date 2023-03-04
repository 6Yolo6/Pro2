//#include <iostream>                                      
//#include <stack>                                                                                                         
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//inline size_t level(const char ch)
//{
//	if (ch == '+' || ch == '-')
//		return 1;
//	if (ch == '*' || ch == '/')
//		return 2;            
//	if (ch == '^')
//		return 3;
//	if (ch == '(')
//		return 4;
//}
//
//int calc(stack<char>& s, stack<int>& num)
//{
//	int result{ 0 };
//	int re{ 1 };
//	if (num.empty())
//		return 0;
//	int right{ num.top() };                            
//	num.pop();
//	if (num.empty())
//		return 0;
//	int left{ num.top() };                            
//	num.pop();                  
//	int cnt{ 0 };
//	switch (s.top())                                      
//	{
//	case '+':
//		result = left + right;
//		break;
//	case '-':
//		result = left - right;
//		break;
//	case '*':
//		result = left * right;
//		break;
//	case '/':
//		result = left / right;
//		break;
//	case '^':
//		cnt = right;
//		while (cnt--) {
//			re *= left;
//		}
//		result = re;
//		break;
//	default:
//		return result;
//	}
//	s.pop();                                              
//	num.push(result);
//	return result;
//}
//
//int main1545151564111()
//{
//	stack<int> num; //操作数                            
//	stack<char> ch;  //操作符                           
//	string str;                                             
//	while (true)
//	{
//		getline(cin, str, '\n');
//		if (str.empty())
//			break;
//		str.erase(remove(begin(str), end(str), ' '), end(str));//擦除空格
//		size_t index{};            
//		while (true)
//		{
//			if (str[index] >= '0' && str[index] <= '9') {
//				int re = 0;
//				while ((str[index] >= '0' && str[index] <= '9')) {
//					re = 10 * re + str[index++] - '0';
//				}
//				num.push(re);
//			}
//			else if (str[index] != ')')
//				ch.push(str[index++]);
//			else if (str[index] == ')')
//				index++;                                 
//			while (!ch.empty() && level(str[index]) <= level(ch.top())) {
//				if (ch.top() == '(') 
//					break;
//				else {
//					calc(ch, num);
//					if (!ch.empty())
//						if (ch.top() == '(' && str[index - 1] == ')')
//							ch.pop();
//					if (index < str.length() && str[index + 1] == '^')
//						break;
//				}
//			}
//			if (index == str.length())
//				break;
//		}
//		cout <<  num.top() << endl;
//	}
//	return 0;
//}




//
//#include <iostream>
//
//using namespace std;
//
//int judge();
//int level1();//优先级计算
//int level2();
//int level3();
//
//int level1()
//{
//    int result = level2();
//    while (true)
//    {
//        char op = cin.peek();
//        if (op == '+' || op == '-')
//        {
//            cin.get();
//            int value = level2();//读取下一项
//            if (op == '+')
//                result += value;
//            else
//                result -= value;
//        }
//        else
//            break;
//    }
//    return result;
//}
//
//int level2()
//{
//    int result = level3();
//    while (true)
//    {
//        char op = cin.peek();
//        if (op == '*' || op == '/')
//        {
//            cin.get();
//            int value = level3();//读取下一项
//            if (op == '*')
//                result *= value;
//            else if (op == '/')
//                result /= value;
//        }
//        else
//            break;
//    }
//    return result;
//}
//
//int level3()
//{
//    int result = judge();
//    while (true)
//    {
//        char op = cin.peek();
//        if (op == '^')
//        {
//            cin.get();
//            int value = judge();
//            int re = 1, cnt = value;
//            if (op == '^') {
//                while (cnt--)
//                    re *= result;
//                result = re;
//            }
//        }
//        else
//            break;
//    }
//    return result;
//}
//
//int judge()
//{
//    int result = 0;
//    char c = cin.peek();
//    if (c == '(')
//    {
//        cin.get();//去掉左括号
//        result = level1();//读入表达式
//        cin.get();//去掉右括号
//    }
//    else
//    {
//        while (isdigit(c))//isdigit判断是否是数字
//        {
//            result = 10 * result + c - '0';
//            cin.get();
//            c = cin.peek();
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    cout << level1() << endl;
//    return 0;
//}

