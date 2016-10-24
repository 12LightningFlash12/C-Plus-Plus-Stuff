#include<iostream>
using namespace std;

int main(int argc, char ** argv){
  double name, share, value, total;
  
  cout<< "Enter name: ";
  cin >> name;
  cout << "\n";
  
  cout << "Enter nuumber of shares: ";
  cin >> share;
  cout << "\n";
  
  cout << "Enter share value: ";
  cin >> val;
  cout << "\n";
  
  total = share * val;
  
  cout << "Stock name: " << name << "\n" << endl;
  cout << "Number of shares: " << share << "\n" << endl;
  cout << "Share value: " << val << "\n" << endl;
  cout << "Total value: " << total << "\n" << endl;
  
  return 0;
}

