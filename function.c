
// Parameters and Argument
#include<stdio.h>
void myFunction(char name[])
{
Printf(“The Code is Executed”, name);
}
int main()
{
myFunction(“Sabbir”);
myFunction(“Sakil”);
myFunction(“Habib”);
return 0;
}

//Multiple Parameter
#include<stdio.h>
Void myFunction(char name[], int age )
{
printf(“The Code is Executed”, name, age);
}
int main()
{
myFunction(“Sabbir”, 28);
myFunction(“Sakil”, 26);
myFunction(“Habib”, 26);
return 0;
}
Sabbir Hossen


//Return Value 
#include<stdio.h>
int myFunction(int x )
{
return 5+x;
}
int main()
{
printf ( “Value Pass”, myFunction(3);
return 0;
}


//Write a C program to add a range of numbers together using recursion 
#include <stdio.h>
int sum(int k);
int main() {
 int result = sum(10);
 printf("%d", result);
 return 0;
}
int sum(int k) {
 if (k > 0) {
 return k + sum(k - 1);
 } else {
 return 0;
 }

 //Write a C program to find the factorial of a number using recursion 
Sabbir Hossen
#include <stdio.h>
int fact (int); 
int main() 
{ 
 int n,f; 
 printf("Enter the number whose factorial you want
 to calculate?"); 
 scanf("%d",&n); 
 f = fact(n); 
 printf("factorial = %d",f); 
} 
int fact(int n) 
{ 
 if (n==0) 
 { 
 return 0; 
 } 
 else if ( n == 1) 
 { 
 return 1; 
 } 
 else 
 { 
 return n*fact(n-1); 
 } 
}


//Write a C program to check a number Even or Odd using function
Sabbir Hossen
#include <stdio.h> 
char* odd_even(int i); 
int main() 
{ 
int number; 
printf("Enter an integer : "); 
scanf("%d", &number); 
printf("Result : %s",odd_even(number)); 
return 0; 
} 
char* odd_even(int number) 
{ 
if (number%2 == 0)
{ 
return "YOUR NUMBER IS EVEN NUMBER"; \
}
else
{ 
return "YOUR NUMBER IS ODD NUMBER";
 } 