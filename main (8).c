/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int n, num = 0;
/* Input number from user */
 printf("Enter any number to print in words: ");
 scanf("%d", &n);
 /* Store reverse of n in num */
 while(n != 0)
 {
 num = (num * 10) + (n % 10);
 n /= 10;
}
/* Extract last digit of number and print corresponding digit in words till num becomes 
0 */
 while(num != 0)
 {
 switch(num % 10)
 {
 case 0: 
 printf("Zero ");
 break;
 case 1: 
 printf("One ");
 break;
 case 2: 
 printf("Two ");
 break;
 case 3: 
 printf("Three ");
 break;
 case 4: 
 printf("Four ");
 break;
 case 5: 
 printf("Five ");
 break;
 case 6: 
 printf("Six ");
 break;
 case 7: 
 printf("Seven ");
 break;
 case 8: 
 printf("Eight ");
 break;
 case 9: 
 printf("Nine ");
 break;
 }
 num = num / 10;
 }
 return 0;
    
}

