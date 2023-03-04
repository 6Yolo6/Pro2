//#include <iostream>
//
//using namespace std;
//
//struct STUDENT {
//    int     id;
//    int     c_score;     // C语言分数
//    int     math_score;  // 数学成绩
//    int     interview;   // 面试分数
//    int     final_score; // 最终成绩
//};
//
//// 初始化列表，size为记录的条数
//// 返回初始化的动态数组的指针
//STUDENT* init_student_list(int size) {
//    STUDENT* p = new STUDENT[size];
//    return p;
//}
//
//// slist为要添加的结构体数组，pos添加的位置，你可以认为直接覆盖相关位置
//// id、c_score、math_score、interview为学号、C语言成绩、数学成绩、面试成绩
//void add_one_student(STUDENT* slist, int pos, int id, int c_score, int math_score, int interview) {
//    slist[pos].id = id;
//    slist[pos].c_score = c_score;
//    slist[pos].math_score = math_score;
//    slist[pos].interview = interview;
//    slist[pos].final_score = (int)((slist[pos].c_score + slist[pos].math_score + slist[pos].interview) / 3.0);
//}
//
//// 依次显示slist数组里的所有记录。size为数组的数目
//void show_all_students(const STUDENT* slist, int size) {
//    for (int i = 0; i < size; i++) {
//        cout << slist[i].id << " ";
//        cout << slist[i].c_score << " ";
//        cout << slist[i].math_score << " ";
//        cout << slist[i].interview << " ";
//        cout << slist[i].final_score << endl;
//    }
//}
//
//// 销毁对应slist指向的动态数组，回收内存
//void destroy_student_list(STUDENT* slist) {
//    delete[] slist;
//    slist = nullptr;
//}
//
//int main231551505() {
//    int size;
//    cin >> size;
//    STUDENT* slist = init_student_list(size);
//    int id, c_score, math_score, interview;
//    for (int i = 0; i < size; i++) {
//        cin >> id >> c_score >> math_score >> interview;
//        add_one_student(slist, i, id, c_score, math_score, interview);
//    }
//    show_all_students(slist, size);
//    destroy_student_list(slist);
//    show_all_students(slist, size);
//	return 0;
//}