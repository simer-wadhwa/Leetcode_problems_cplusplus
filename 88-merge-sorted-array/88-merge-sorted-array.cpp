class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        
        
        int i=m-1,j=n-1;
        int k=n+m-1;
        
        while(i>=0 && j>=0)
        {
          if(nums1[i]<nums2[j])
          {
              nums1[k--]=nums2[j--];
          }
            else
            {
               nums1[k--]=nums1[i--];
               
            }
        }
        //while(i<m)
       // {
           //sort(nums1.begin(),nums1.begin()+m); 
        //}
       while(j>=0)
        {
            nums1[k--]=nums2[j--];
        }
        
        
        
    }
};