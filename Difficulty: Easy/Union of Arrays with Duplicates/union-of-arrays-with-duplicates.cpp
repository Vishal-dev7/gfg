class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int a1=a.size();
        int b1=b.size();
        int i=0;
        int  j=0;
        vector<int>temp;
        while(i<a1 && j<b1)
        {
            if(a[i]<=b[j])
            {
                if(temp.empty() || temp.back()!=a[i])
                {
                    temp.push_back(a[i]);
                }
                i++;
            }
            else{
                if(temp.empty() || temp.back()!=b[j])
                {
                    temp.push_back(b[j]);
                    
                }
                j++;
            }
            
        }
        while(i<a1)
        {
             if(temp.empty() || temp.back()!=a[i])
                {
                    temp.push_back(a[i]);
                    
                }
                i++;
        }
        while(j<b1)
        {
             if(temp.empty() || temp.back()!=b[j])
                {
                    temp.push_back(b[j]);
                    
                }
                j++;
        }
     return temp.size();
    }
   
};