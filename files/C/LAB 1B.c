//
//  main.c
//  b
//
//  Created by James Bird on 09/11/2020.
//

#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    double tolerance, length, diameter, avgdiameter, avglength, average, num, total2;
    int total;
    
    printf("Enter tolerance:\n");
    scanf("%lf", &tolerance);
    total = 0 ;
    avgdiameter=0;
    avglength=0;
    num=0;
    total2=0;
    do{
            printf("Enter the bolt length and diameter: (enter a negative to exit)\n");
    scanf("%lf %lf", &length, &diameter);
        total2+=1;
        if ((diameter>(12-tolerance))&&(diameter<(12+tolerance))&&(length>(50-tolerance))&&(length<(tolerance+50))){
            printf("within tolerance\n");
            total+=1;
            avgdiameter+=diameter;
            avglength+=length;
            avgdiameter = avgdiameter / total;
            avglength = avglength / total;
            }
    else
    {
        (printf("outside tolerance\n"));
        num+=1;
}
    
    } while
        ((length>0) && (diameter>0));
    average = (num/total2)*100;
    printf("the total number of bolts that where within tolerance was %d\n", total);
    printf("the percentage of the number of bolts within tolerance was %lf\n", average);
    printf("the average diamater of all bolts is %lf and average length is %lf\n", avgdiameter, avglength);
    
    return 0;
    
}
    
