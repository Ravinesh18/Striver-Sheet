class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
         int largest = INT_MIN;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>largest)
            largest=arr[i];
        }
        int secondlargest = -1;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>secondlargest && arr[i]<largest)
            secondlargest = arr[i];
        }
        return secondlargest;
    }
};