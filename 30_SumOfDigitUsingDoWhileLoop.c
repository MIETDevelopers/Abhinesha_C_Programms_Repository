#include<stdio.h> /* including header file */
int main() {
 int num,sum; /* given numbers */
 printf("Enter integer numbers: ");   /* printing the number */
 scanf ("%d", &num);
 sum = 0;
 do {
  sum += num % 10; /* add LS digit to digit sum */
  num /= 10; /* remove LS digit from num */
 }
  while (num > 0);
 printf ("The Sum is = %d \n",sum);  /* printing output */
 return 0;
}
