#include <iostream>
using namespace std;
int main(){
    cout<<"Hello World I am Vijay";

    int a =12;
    cout<<a<<endl;//12

    int b =13;
    cout<<sizeof(b)<<endl;//4

    string name = "Vijay Singh";
    cout<<name.length()<<endl; //11 space also takes

    return 0;
}

// 1. #include <iostream>
// This line tells the compiler:
// “Please include the input/output library.”
// It allows you to use cout, cin, etc.

// 2. using namespace std;
// This line allows you to write cout instead of std::cout.
// It makes code shorter and easier to read.

// 3. int main() { ... }
// This is the starting point of every C++ program.
// The computer starts execution from here.

// 4. cout << "Hello World";
// This prints text on the screen.
// cout = console output.

// 5. return 0;
// This means the program ended successfully.
// It returns 0 to the operating system.