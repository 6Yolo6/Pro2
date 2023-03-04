//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//int main1234() {
//    int n, k;
//    vector<int> a;
//    int temp;
//    cin >> n >> k;
//    for (int i = 0; i < n; i++) {
//        cin >> temp;
//        a.push_back(temp);
//    }
//    sort(a.begin(), a.end());
//    deque<int> grimPatron(a.begin(), a.end());
//    while (k--) {
//        for (int i = 0; i < grimPatron.size(); i++) {
//            grimPatron[i]--;
//        }
//        int N = 0;
//        int Max = grimPatron.size();
//        for (int i = 0; i < grimPatron.size(); i++) {
//            if (grimPatron[i] == 0) {
//                N++;
//            }
//        }
//        for (int j = 0; j < N; j++) {
//            grimPatron.pop_front();
//        }
//        for (int j = 0; j < Max - N; j++) {
//            if (grimPatron.size() + N < 7)
//                grimPatron.push_back(3);
//        }
//    }
//    cout << grimPatron.size() << endl;
//    return 0;
//}
