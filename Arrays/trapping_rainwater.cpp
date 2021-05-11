/*Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.*/
class Solution {
public:
    int trap(vector<int>& height) {
       int res=0;
        int n=height.size();
        for(int i=1;i<n-1;i++)
        {
            int res=0;
            int lmax[n];
            int rmax[n];
            lmax[0]=height[0];
            for(int i=1; i<n;i++)
            lmax[i]= max(height[i],lmax[i-1]);
            rmax[n-1]=height[n-1];
            for(int i=n-2;i>=0;i--)
            rmax[i]=max(height[i],rmax[i+1]);
            for(int i=1;i<n-1;i++)
            res=res+(min(lmax[i],rmax[i])-height[i]);
            return res;
        }
        return res;// Code here
    }
};
