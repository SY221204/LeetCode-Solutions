class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int i = 0;
         int k = 0;
    for(i = 0; i<nums.size(); i++){
        if(nums[i] != 0){
            nums[k] = nums[i];
            k++;
        }
        
    }
    for(int i = k; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};