    /*
    * this file solve the exercise of chapter : Decision control and looping for following question
    * Ex Question 1: write a program to determine whether a person is eligible to votes.
    * age >= 18
    */
   #include <stdio.h>
   int main(){
    int age;
    printf("\enter your age:");
    scanf("%d",&age);
    if(age>=18)
    printf("\n you are eligible to vote");
    return 0;
   }