class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int n=nums.size();
      unordered_set<int> ans;
     
      for(int x :nums){
       if(ans.find(x)!=ans.end()){
         return true;
       }
       ans.insert(x);
         }
    
       
      
    
     return false;
        
    }
   
};