#include<iostream>
using namespace std;
int main(){
    //Even Number
    // for(int i=0;i<=20;i+=2){
    //     cout<<i<<" ";
    // }

    //  for(int i=0;i<=20;i++){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    // }

    //Odd Number
    // for(int i=1;i<=20;i+=2){
    //     cout<<i<<" ";
    // }



    //a to z
    // for(char ch='a';ch<='z';ch++){
    //     cout<<ch<<" ";
    // }


    //sum of first 10 number
    // int sum=0;
    // for(int i=1;i<=10;i++){
    //     sum=sum+i;
    // }
    // cout<<"Sum of first 10 numbers = "<<sum<<endl;



    //sum of square of first 10 natural numbers
    //  int sum=0;
    // for(int i=1;i<=10;i++){
    //     sum=sum+(i*i);
    // }
    // cout<<"Sum of square of first 10 numbers = "<<sum<<endl;



    //Nested Loop
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
    //    for(int i=1;i<=5;i++){ 
    //     for(int j=1;j<=5;j++){    
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;// next line
    // }

// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e 

    // for(int i=1;i<=5;i++){         
    //     for(char ch='a';ch<='e';ch++){  
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;// next line
    // }


    //10 to 1
    // for(int i=10;i>=1;i--){
    //     cout<<i<<endl;
    // }

    //Table program
    // int table=7;
    // for(int i=1;i<=10;i++){
    //     cout<<table*i<<endl;
    // }



//* * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
    //  for(int i=1;i<=5;i++){       
    //     for(int j=1;j<=5;j++){   
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }




// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
//  for(int i=1;i<=5;i++){       
//         for(int j=1;j<=i;j++){  
//             cout<<"* ";
//         }
//         cout<<endl;
//     }


// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
//  for(int i=1;i<=5;i++){       
//         for(int j=5;j>=i;j--){  
//             cout<<"* ";
//         }
//         cout<<endl;
//     }



//     *
//    **
//   ***
//  ****
// *****

// for(int j=4;j>=0;j--){
// for(int i=0;i<j;i++){
//     cout<<" ";
// }
// for(int i=0;i<5-j;i++){
//     cout<<"*";
// }
// cout<<endl;

// }




// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

  int count=1;
    for(int i=1;i<=5;i++){          
        for(int j=1;j<=5;j++){      
            cout<<count<<" ";
            count++;            
        }
        cout<<endl;
    }

    return 0;
}