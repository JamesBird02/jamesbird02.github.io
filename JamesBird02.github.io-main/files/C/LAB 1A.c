//
//  main.c
//  c
//
//  Created by James Bird on 09/11/2020.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double m, acid, alkaline, result;
   
    printf("Enter your value for the concentration of Hydrogen ions m: ");
    scanf("%le", &m);
   
    acid = -log10(m);
    alkaline = -log10(1/m*pow(10, -14));
    
    if(m > 1 || m< pow(10, -14)){
        printf("ERROR: you need to enter a number between 1 and 10^-14\n");}
    else{
        printf("The acidity of your solution is %lf and the alkalinity is %lf\n", acid, alkaline);
        result = acid + alkaline;
        printf("= sum of PH and POH %lf\n", result);
        }

    if(acid <= 14 && acid >= 7.1){
        printf("solution is Alkaline\n");
    }
    else if(acid >= 6.9 && acid < 7.1){
        printf("solution is Neutral\n");
    }
    else if(acid >= 0 && acid <= 6.9){
        printf("solution is Acid\n");
    }
}
