//Roatate array by one in Gfg
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        //store the last number into temp
        int temp=arr[n-1];
        
        //(n-2) to 0, shift them one position to right
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        //0th index per temp vala daal do
        arr[0]=temp;
    }
};

//Rotate array in leetcode 189 Method=1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
             // code here
             while(k){
        int n=nums.size();
        
        //store the last number into temp
        int temp=nums[n-1];
        
        //(n-2) to 0, shift them one position to right
        for(int i=n-2;i>=0;i--){
            nums[i+1]=nums[i];
        }
        //0th index per temp vala daal do
        nums[0]=temp;
        k--;
    }
    }
};

//Method = 2
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotatearrclockwise(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        vector<int>nums(n);
        // creted new array
        
        //now iterate over array
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n]=arr[i];
        }
        
        
        //copy array into new array
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
    }
};

