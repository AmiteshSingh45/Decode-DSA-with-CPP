// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n=nums.size();
//         //method 1

//         // vector <int> v;
//         // int sum=0;
//         // for(int i=0;i<n;i++){
//         //       sum+=nums[i];
//         //       v.push_back(sum);
//         // }
//         // return v;


//         // method 2


//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];
//         }
//         return nums;
//     }
// };