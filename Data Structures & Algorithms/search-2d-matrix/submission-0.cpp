class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat[0].size();
        int n=mat.size();
        int lo=0;
        int hi=m*n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int row=mid/m;
            int col=mid%m;
            if(mat[row][col]<target){
                lo=mid+1;
            }
            else if(mat[row][col]>target){
                hi=mid-1;

            }
            else{
                return true;
            }
        }
        return false;
        
    }
};
