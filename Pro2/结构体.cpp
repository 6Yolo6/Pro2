//#include <iostream>
//
//using namespace std;
//
//struct STUDENT {
//    int     id;
//    int     c_score;     // C���Է���
//    int     math_score;  // ��ѧ�ɼ�
//    int     interview;   // ���Է���
//    int     final_score; // ���ճɼ�
//};
//
//// ��ʼ���б�sizeΪ��¼������
//// ���س�ʼ���Ķ�̬�����ָ��
//STUDENT* init_student_list(int size) {
//    STUDENT* p = new STUDENT[size];
//    return p;
//}
//
//// slistΪҪ��ӵĽṹ�����飬pos��ӵ�λ�ã��������Ϊֱ�Ӹ������λ��
//// id��c_score��math_score��interviewΪѧ�š�C���Գɼ�����ѧ�ɼ������Գɼ�
//void add_one_student(STUDENT* slist, int pos, int id, int c_score, int math_score, int interview) {
//    slist[pos].id = id;
//    slist[pos].c_score = c_score;
//    slist[pos].math_score = math_score;
//    slist[pos].interview = interview;
//    slist[pos].final_score = (int)((slist[pos].c_score + slist[pos].math_score + slist[pos].interview) / 3.0);
//}
//
//// ������ʾslist����������м�¼��sizeΪ�������Ŀ
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
//// ���ٶ�Ӧslistָ��Ķ�̬���飬�����ڴ�
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