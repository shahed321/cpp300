#include <iostream>
using namespace std;

int sum(int a, int b){
int result;
result = a+b;
return (result);
}

int main(){
int result = sum(20, 30);

cout << "Result of some is : "<< result<< endl;

return 0;
}