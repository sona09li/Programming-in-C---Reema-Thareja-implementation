/*
* this file solves the exercise of chapter : Decision control and looping for following question
* Ex Question 1: write a program to find whether the given number is even or odd
* num/2==0 is even
*/
#include <stdio.h>
int main(){
    int num;
    printf("\n enter any number:");
    scanf("%d",&num);
    if(num/2==0)
    printf("\n %d is an even number",num);
    else
    printf("\n %d is an odd number",num);
    return 0;
}