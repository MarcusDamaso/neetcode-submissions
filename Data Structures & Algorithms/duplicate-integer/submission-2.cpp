class Solution {
public:
    
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> visto;
       for(int i = 0;i<nums.size();i++){
            if(visto.count(nums[i])){
                return true;
            }
            visto.insert(nums[i]);

       }
       return false;


    }
};