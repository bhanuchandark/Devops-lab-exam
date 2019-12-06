//c program creating palindrome number

#include<stdio.h>
int main()
{
int num,rem,sum=0,temp;    
printf("enter the number: ");    
scanf("%d",&num);    
temp=num;    
while(num>0)    
{    
rem=num%10;    
sum=(sum*10)+rem;    
num=num/10;    
}    
if(temp==sum)    
printf("The given number is palindrome number\n");    
else    
printf("The given number is not palindrome number\n");   
return 0;  
}   
