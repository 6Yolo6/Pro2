//#include<iostream>
//#include<vector>
//using namespace std;
//int main1533()
//{
//    vector<int> candy, date;            
//    int n, ans = 0, eat[105] = { 0 };          
//    cin >> n;
//    for (int i = 0, a, b; i < n; i++) {
//        cin >> a >> b;
//        candy.push_back(a);
//        date.push_back(b - 1);         
//    }
//
//    for (int i = 0; i < n; i++) {
//        int x = date[i];
//        if (!eat[x]) {                  
//            eat[x] = 1;
//            ans += candy[i];
//        }
//        else {                        
//            while (x > 0) {
//                if (!eat[x - 1]) {
//                    eat[x - 1] = 1;
//                    ans += candy[i];
//                    break;
//                }
//                x--;
//            }
//        }
//    }
//    cout << ans;
//    return 0;
//}
