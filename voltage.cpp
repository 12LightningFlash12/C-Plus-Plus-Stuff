#include<iostream>
using namespace std;

int main(){
  double mAh, wH, joule, cap, volt, ch;
  
  cout << "/------------------\\n";
  cout << "|Voltage Calculator|\n";
  cout << "\------------------/\n";
  cout << "\n\n";
  
  cout << "What are you using?\n";
  cout << "1.Wh & mAh or 2.J & C\n";
  cin >> ch;
  cout << "\n\n";
  
  if(ch == 1){
    cout << "running algorithm...\n\n";
    
    cout << "Enter Wh: ";
    cin >> wH;
    cout << "\n\n";
    
    if(wH <= 0){
      cout << "YOU SHALL NOT PASS!\n\n";
    }else{
      cout << "Enter mAh: ";
      cin >> mAh;
      cout << "\n\n";
      
      if(mAh <= 0){
        cout << "YOU SHALL NOT PASS!\n\n";
      }else{
        volt = wH / mAh * 1000;
        
        cout << "Result: " << volt << "\n\n";
      }
    }
    
    cout << "alorithm finished\n\n\n";
  }else if(ch == 2){
    cout << "running algorithm...\n\n";
    
    cout << "Enter joules: ";
    cin >> joule;
    cout << "\n\n";
    
    if(joule <= 0){
      cout << "YOU SHALL NOT PASS!\n\n";
    }else{
      cout << "Enter capacitance: ";
      cin >> cap;
      cout << "\n\n";
      
      if(cap <= 0){
        cout << "YOU SHALL NOT PASS!\n\n";
      }else{
        volt = sqrt( 1/2 (joule/cap));
        
        cout << "Result: " << volt << "\n\n\n" << endl;
      }
    }
    cout << "algorithm finished\n\n";
  }else{
    cout << "i do not reconize that command\n\n";
  }
  
  cout << "voltage calculator finished\n\n\n";
  cout << "press any key to exit...\n";
  
  return 0;
}

