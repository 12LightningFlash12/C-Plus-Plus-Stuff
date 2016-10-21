#include<iostream>
using namespace std;

int main(){
  double force, mass, time, cVel, accel, ch;
  
  cout << "|-----------------------|\n";
  cout << "|Acceleration calculator|\n";
  cout << "|-----------------------|\n\n\n";
  
  cout << "What are you using?\n";
  cout << "1. Force and Mass or 2. time and Velocity\n";
  cin >> ch;
  cout << "\n\n";
  
  if(ch == 1){
    cout << "running algorithm 1\n\n";
    
    cout << "Enter force: ";
    cin >> force;
    cout << "\n\n";
    
    cout << "Enter mass: ";
    cin >> mass;
    cout << "\n\n";
    
    if(mass <= 0){
      cout << "YOU SHALL NOT PASS!\n";
    }else{
      accel = force / mass;
      
      cout << "Result" << accel << "m/s2\n\n" << endl;
      
      cout << "algorithum 1 completed\n\n\n";
    }
  }else if(ch == 2){
    cout << "running algorithum 2\n\n";
    
    cout << "Enter the change in velocity: ";
    cin >> cVel;
    cout << "\n\n";
    
    cout << "Enter time: ";
    cin >> time;
    cout << "\n\n\n";
    
    if(time <= 0){
      cout << "YOU SHALL NOT PASS!\n\n";
    }else{
      accel = cVel / time;
      
      cout << "Result: " << accel << "m/s2\n\n" << endl;
      
      cout << "algorithm 2 completed\n\n\n";
    }
  } else{
    cout << " i do not reconize that command\n\n";
  }
  
  cout << "|---------------------------------|\n";
  cout << "|Acceleration calculator completed|\n";
  cout << "|---------------------------------|\n\n\n";
  
  cout <<  "press any key to exit...";
  
  return 0;
}
