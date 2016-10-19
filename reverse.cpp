#include<iostream>
using namespace std;

int main(){
  int number, reverse = 0;
  
  cout<< "Enter a number: ";
  cin>> number >> endl;
  
  for( ; number != 0; ){
    reverse = reverse * 10;
    reverse = reverse + number % 10;
    number = number / 10;
  }
  
  cout<<"The reversed number is: "<< reverse << endl;
  
  return 0;
}
