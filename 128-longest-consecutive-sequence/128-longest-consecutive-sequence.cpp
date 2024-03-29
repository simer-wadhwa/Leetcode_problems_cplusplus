class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
           //sort the given vector 
    sort(nums.begin() , nums.end());
    // take max = 1 as minimum length of a sequence is 1 if vector is not null
    int maxi = 1;
    // initially take count = 1 
    int count = 1;
    // if vector is a null vector then return 0
    if(nums.size() == 0) return 0;
    // iterate over the sorted vector 
    // if [i+1] is just higher than [i] , then increase the count.
     for(int i = 1; i<nums.size(); i++){
         if(nums[i] == nums[i-1] + 1){
             count++;  
         }else if (nums[i] != nums[i-1]){
             count = 1;
         }
         // return the maximum of max and count
         maxi = max(maxi ,count);
     }
    return maxi;
        
    }
};