class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;

            int l=i+1;
            int r=n-1;
             int target=-nums[i];
             while(l<r){
              
                
                  if((nums[l]+nums[r]<target)){
                    l++;
                }
                else if(nums[l]+nums[r]>target) {
                    r--;

                }
                else{
                    if(nums[l]+nums[r]==target){
                        ans.push_back({nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                        
                    while(l<n && nums[l]==nums[l-1]){
                        l++;
                    }
                    while(r>0&& nums[r]==nums[r+1]){
                        r--;
                    }
                    }
                }
             }
        }
        return ans;
    }
};
