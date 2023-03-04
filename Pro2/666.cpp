//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//struct Node
//{
//    int val, pos;
//};
//bool cmp(Node a, Node b)
//{
//    if (a.val != b.val)
//        return a.val > b.val;
//    return a.pos < b.pos;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    Node *a = new Node[n + 1];
//    int *result =  new int[n + 1];
//    for (int i = 1; i <= n; ++i)
//    {
//        scanf("%d", &a[i].val);
//        a[i].pos = i;
//    }
//
//    sort(a + 1, a + n + 1, cmp);
//    for (int i = 1; i <= n; ++i)
//    {
//        if (i > 1 && a[i].val == a[i - 1].val)
//            result[a[i].pos] = i - 1;
//        else
//            result[a[i].pos] = i;
//    }
//    for (int i = 1; i <= n; ++i)
//    {
//        if (i == 1)
//            printf("%d", result[i]);
//        else
//            printf(" %d", result[i]);
//    }
//    return 0;
//}