class Solution {
public:
    vector<int> test {};
    bool hasDuplicate(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            for(int j = 0;j<test.size();j++){
                if (nums[i] == test[j]){
                    return true;
                }
            }
            test.push_back(nums[i]);
        }
        return false;
    }
};