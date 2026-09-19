class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        int len=0;
        vector<int>v(128,0);
        while(i<n && j<n){

          v[s[j]]++;
          
         
          while(v[s[j]]>1){
            v[s[i]]--;
            i++;
          }
         
          len=max(len,j-i+1);
           j++;

        }
        return len;
        
    }
};
