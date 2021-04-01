// Program to take 10 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main() {
  int values[10];

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 10; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 10; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}