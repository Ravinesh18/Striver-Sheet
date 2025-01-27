class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k)
            c=1;
        }
        
        if(c==1)
        return true;
        return false;
    }
};
