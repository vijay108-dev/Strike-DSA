#include<iostream>
using namespace std;

// void increment(int &n){
//     n++;
// }

void swap(int &a, int &b){
    int c = a;
    a=b;
    b=c;
}
// default parameter
void printing(int num = 5){
    cout<<num<<endl;
}

int main(){

    // int a = 10;

    // increment(a);



//     cout<<a<<endl;

    int a = 10, b = 20;
    
    swap(a,b);

    // int c;
    // c = a;
    // a = b;
    // b = c;
    
    cout<<a<<" "<<b<<endl;



    printing(10);
    printing();
  
    return 0;
}



