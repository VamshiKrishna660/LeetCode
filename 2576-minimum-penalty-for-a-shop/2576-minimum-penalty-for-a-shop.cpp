// class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int len = customers.length();
//         int mini = INT_MAX, y=0, n=0;
//         int pen = 0;
//         for(char ch : customers){// 
//         // YYNNYNYYN
//             if(ch == 'Y'){
//                 y++;
//             }
//             else{
//                 n++;
//             }
//         }
//         int a=0, b=0;
//         int ans = INT_MAX;
//         for(int j=0;j<=len;j++){
//             if(customers[j] == 'Y'){
//                 pen = y-a+b;
//                 a++;
//             }
//             else{
//                 b++;
//             }
//             cout<<pen<<" ";
//             if(mini > pen) {
//                 mini = pen;
//                 ans = j+1;
//             }
//         }
//         return ans==0? 0:ans;
//     }
    
//     // NNNYNN ...............
//     // NNNNN
// // YYNYNYN
// // YN
// // NYYYNNNYNN
// };

// /*
// class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int max_score = 0, score = 0, best_hour = -1;
//         for(int i = 0; i < customers.size(); ++i) {
//             score += (customers[i] == 'Y') ? 1 : -1;
//             if(score > max_score) {
//                 max_score = score;
//                 best_hour = i;
//             }
//         }
//         return best_hour + 1;
//     }
// };
// YYNY
// */

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> pre(n+1, 0), suf(n+1, 0);
        for(int i=0; i<n; i++){
            pre[i+1] = pre[i] + (customers[i] == 'N');
        }
        for(int i=n-1; i>=0; i--){
            suf[i] = suf[i+1] + (customers[i] == 'Y');
        }
            // yyny pre = 0 0 0 1 1
            //     suff = 3 2 1 1 0
        int ans = -1;
        int min_penalty = 1e6;
        for(int i=0; i<=n; i++){
            int penalty = pre[i] + suf[i];
            if(min_penalty > penalty){
                ans = i;
                min_penalty = penalty;
            }
        }
        return ans;
    }
};