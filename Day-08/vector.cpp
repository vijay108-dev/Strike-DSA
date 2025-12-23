#include <iostream>
#include<vector>
using namespace std;

int main() {

//one way to create array
    // int arr[5]={1,2,3,4,5};

    //another way to create array
    vector<int>arr(5); //here is my 5 size of arr is created

    //int n=arr.size(); //kitna size ka h ye

    arr[0]=1;
    arr[1]=2;
     arr[2]=3;
    arr[3]=4;
      arr[4]=5;
     
     //benifit of vector is you can push more elements
     arr.push_back(12);

     int n=arr.size();

      for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
      }

      cout<<n<<endl; //6


    //vector are dynamic , array size is fixed due to stack
    return 0;
}