/*
Problem Link: https://www.hackerrank.com/challenges/30-data-types/problem
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
   
    // Declare second integer, double, and String variables.
    int a; 
    double b;
    
    char c[1000];
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&a);
    scanf("%lf",&b);
    while(getchar()!='\n');
    fgets(c,sizeof(c),stdin);
    c[strcspn(c, "\n")]=0;
    // Print the sum of both integer variables on a new line.
    printf("%d\n",a+i);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",b+d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    printf("%s%s\n",s,c);
    return 0;
}