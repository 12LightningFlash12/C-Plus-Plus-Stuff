#include<studio.h>

int main(){
  int number;
  
  /*printf(""); outputs whats in the "", simular to cout << "" using iostream and namespace
   *scansf() scans and stores formatted input
  */
  
   
  printf("Enter an integer: ");
  
  scanf("%d", &number);
  
  printf("You entered %d", number);
  
  return 0;
}
