#include <iostream>
using namespace std;
 
// function can be declare first
int max(int num1, int num2);
 
int main () {
   // local variable declaration:
   int a = 40;
   int b = 70;
   int maxnum;
 
   // calling a function to get max value.
   maxnum = max(a, b);
   cout << "Max value is : " << maxnum << endl;
 
   return 0;
}
 
// then function body can be created
int max(int num1, int num2) {
   
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}