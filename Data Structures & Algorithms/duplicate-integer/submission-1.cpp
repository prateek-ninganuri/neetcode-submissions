class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int n=nums.size();
      unordered_set<int> ans;
     
      for(int i=0;i<n;i++){
        ans.insert(nums[i]);
         }
      
      if (ans.size()!=n){
         return true;

      }
      else return false;
      
    
    
        
    }
};