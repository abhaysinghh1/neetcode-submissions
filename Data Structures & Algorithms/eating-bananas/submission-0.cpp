class Solution {
    bool allow(vector<int>& piles, int h,int k){ int cnt=0;

        for(auto it:piles){
            cnt+=((it+k-1)/k);
        }
        return cnt<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
int lo=1;
int hi=*max_element(piles.begin(),piles.end());
while(lo<=hi){
    int mid=lo+(hi-lo)/2;

    if(allow(piles,h,mid)){
        hi=mid-1;
    }
    else{
        lo=mid+1;
    }
}
return lo;
        
    }
};
