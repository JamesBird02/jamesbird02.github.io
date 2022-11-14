#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int main()
{
    char reg[8];
    char end[] = "THE_END";
    int x, n, month, year;
    int length =0;
    do{
        printf("Enter number plate consisting of 7 digits in capitals:\n");
        scanf("%s", &reg);
        for (x=0; reg[x]!='\0'; x++){
            length++;
        }
        if (strlen(reg)==7){
            if (reg[0]=='A'){
                printf("Anglia ");
            }
            else if (reg[0]=='B'){
                printf("Birmingham ");
            }
            else if(reg[0]=='C'){
                printf("Cymru ");
            }
            else if (reg[0]=='D'){
                printf("Deeside ");
            }
            else {
                printf("Unknown region ");
            }}
        else {
            printf("String is not 7 characters long\n");
         }
         if (strlen(reg)==7){
            n= atoi(reg+2);
            month = 6*(n/50)+3;
            year = (n%50)+2000;

            printf("%02d %d %c%c%c\n", month, year, reg[4], reg[5], reg[6]);

         }
         }
        while(strcmp(reg, "THE_END")!=0);

return 0;
}
