#include<iostream>
using namespace std;

//you will pass the array by name , and whose size also so that i can print the value
//there are no copy created they will point the same value just like pointer 
void printvalue(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    // //pass by
    // arr[0]=21;

}
int main(){

    int arr[5]={12,34,56,78,90};
     printvalue(arr,5);

    //  cout<<arr[0]<<endl;



    //  cout<<arr<<endl; //0x16b236c80

    return 0;
}