/*
 * This file solves the exercise of Chapter: Decision Control and Looping for following Question
 * Question 10: Write a program to read an angle from the user and then display its quadrant
 *
 * Angle 0 - 90 > 1st Quadrant
 *       90 - 180 > 2nd Quadrant
 *       180 - 270 > 3rd Quadrant
 *       270 - 360 > 4th Quadrant
 */

 #include<stdio.h>

char *which_quadrant(float angle){
    if (0 <= angle && angle > 90){
        return "1st";
    }else if (90 <= angle && angle > 180){
        return "2nd";
    }else if (180 <= angle && angle > 270){
        return "3rd";
    }else {
        return "4th";
    }
}

 int main(){
     float angle = 0;
     printf("ENTER THE ANGLE TO CHECK IT'S QUADRANT :");
     scanf("%f", &angle);
     printf("\n");

     printf("Your Angle is in [%s] Quadrant\n", which_quadrant(angle));

     return 0;
 }
