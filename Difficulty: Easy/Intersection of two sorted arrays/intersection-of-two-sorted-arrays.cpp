class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        vector<int>temp;
        int n1=arr1.size();
        int n2=arr2.size();
        int i=0;
        int j=0;
       while(i<n1 && j<n2)
       {
            if (i > 0 && arr1[i - 1] == arr1[i]) {
                i++;
            }
           
           else if(arr1[i]<arr2[j]){
               i++;
           }
           else if(arr1[i]>arr2[j])
           {
               j++;
           }
           else{
               temp.push_back(arr2[j]);
               i++;
               j++;
           }
       }
        return temp;
    }
};