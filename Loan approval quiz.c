//A bank loan  program
/*Author : Carren cherotich
Reg:CT 101/G/22817/24
Date:29/9/2024
*/
#include <stdio.h>

int main() {
  int age;
  float income;

  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your annual income in shillings: ");
  scanf("%f", &income);

  if (age >= 21 && income >= 21000)
   {
  printf("Congratulations you qualify for a loan.");
  } 
  else 
  {
  printf("Unfortunately, we are unable to offer you a loan this time.");
  }

  return 0;
}