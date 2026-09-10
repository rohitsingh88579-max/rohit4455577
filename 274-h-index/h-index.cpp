class Solution {
public:
    int hIndex(vector<int>& ar) {
        sort(ar.begin(),ar.end());
        int n=ar.size();
       int left=0;
       int right=n-1;
       int ans=0;
       while(left<=right)
       {
           int mid= left+(right-left)/2;
           if(ar[mid]>=n-mid)
           {
             ans=n-mid;
             right=mid-1;
           }
           else
           {
            left=mid+1;
           }
       }
       return ans;
    }
};