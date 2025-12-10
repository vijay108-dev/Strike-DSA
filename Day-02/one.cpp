#include<iostream>
using namespace std;
int main(){

    //Taking input from user
// int a;
// cout<<"Enter the number: "<<endl;
// cin>>a;

// cout<<"Your number is: "<<a<<endl; 

// int a;
// cout<<"Enter the first number: "<<endl;
// cin>>a;
// int b;
// cout<<"Enter the second number: "<<endl;
// cin>>b;
// cout<<"The sum of two numbers is: "<<a+b<<endl;


// char c ='a'+ 1;  //Typecasting
// cout<<c<<endl; //b

//whenever you will add two digit so it will be add when type is same okkk


//1.Arithemtic Operator
    // int a=10;
    // int b=3;
    // cout<<"a+b="<<(a+b)<<endl;  // Addition
    // cout<<"a-b="<<(a-b)<<endl;  // Subtraction
    // cout<<"a*b="<<(a*b)<<endl;  // Multiplication
    // cout<<"a/b="<< (a/b)<<endl; // Division (integer)
    // cout<<"a%b="<<(a%b)<<endl;  // Modulus (remainder)


//2.Assignment Operator
// int a=12;
// int b=4;

//     a+=b;//a=a+b
//     cout<<"a+=b=> "<<a<<endl; //16

//     a-=b;// a=a-b
//     cout<<"a-=b => "<<a<<endl;//12

//     a*=b;  // a=a*b
//      cout<<"a*=b => "<<a<<endl;//48

//     a /= b;//a=a/b
//      cout<<"a/=b => "<<a<<endl;//12

//     a %= b;//a=a%b
//      cout<<"a%=b => "<<a<<endl;//0



//3.Comparision Operator
//   int a=15;
//   int b=6;

//     cout<<"(a==b)=>"<<(a==b)<<endl;//0
//     cout<<"(a!=b)=>"<<(a!=b)<<endl;//1
//     cout<<"(a>b)=>"<<(a>b)<<endl;//1
//     cout<<"(a<b)=>"<<(a<b)<<endl;//0
//     cout<<"(a>=b)=>"<<(a>=b)<<endl;//1
//     cout<<"(a<=b)=>"<<(a<=b)<<endl;//0


// //left shift
// int a =40;
// a =a<<3;//320
// cout<<a<<endl; //whenever you see left shif so simply yo do 20*2^2 or formula=number*2^n

// //Right Shift
// int b=20;
// b =b>>3;
// cout<<b<<endl; //2 formula =number/2^n


//4.Logical Operator
//   int a=10;
//   int b=20;
// cout<<"(a&&b)=>"<<(a&&b)<<endl;//1
// cout<<"(a||b)=>"<<(a||b)<<endl;//1
// cout<<"(!a)=>"<<(!a)<<endl;//0

//&&(and): Both side should be true-> Then only true, else false
// ||(or): if both side is false--> Then only false, else True
// !Not -->True becomes False and false becomes true


//Increment and Decrement
//  int a=10;
// int b=3;

// cout<<(++a)<<endl; //11 pre-increment
// cout<<(a++)<<endl;//11 post-increment
// cout<<a<<endl;//12

// cout<<(--b)<<endl;//2 pre-decrement
// cout<<(b--)<<endl;//2 post-decrement
// cout<<b<<endl;//1

// int c =10;

// int d =c++;

// cout<<d<<endl;//10
// cout<<c<<endl;//11


//5.Bitwise operator means bit by bit comparsion
// &  |  ^
  int a = 10;
  int b = 5;

  cout<<(a & b)<<endl; //0 bitwise AND
  cout<<(a | b)<<endl;// 15 bitwise or
  cout<<(a ^ b)<<endl;// 15 bitwise XOR


    return 0;
}