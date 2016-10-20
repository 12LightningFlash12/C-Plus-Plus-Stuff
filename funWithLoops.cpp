#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

void a(){
  Sleep(100);
}

char x[20] = {"Compileing\ncompiled\n"};

void b(){
  Sleep(200);
}

char y[11] = {"Loading...\n"};

void c(){
  Sleep(300);
}

char z[19] = {"Hello. How are you?"};

int main(){
  for(int l = 0; l < 20; l ++){
    cout << x[l];
    a();
  }
  
  for(int m = 0; m < 11; m ++){
    cout << y[m];
    b();
  }
  
  for(int n = 0; n < 19; n ++){
    cout << z[n];
    c(0;
  }
  
  getch();
  return 0;
}

