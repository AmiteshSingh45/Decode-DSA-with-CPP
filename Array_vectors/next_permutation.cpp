// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n=nums.size();
//         //finding pivot
//         int idx=-1;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1])
//             {
//                 idx=i;
//                 break;
//             }
//         }
//         if(idx==-1){
//             reverse(nums.begin(),nums.end());
//         }
//         //sorting/reversing the array greater than pivot
//         reverse(nums.begin()+idx+1,nums.end());
//         //finding greatest number of sorted array
//         int j=-1;
//         for(int i=idx+1;i<n;i++){
//             if(nums[i]>nums[idx]){
//                 j=i;
//                 break;
//             }
//         }
//         //swapping idx and j 
//         int temp=nums[idx];
//         nums[idx]=nums[j];
//         nums[j]=temp;
        
//         return;
//     }

// };