#include <stdio.h>
#include <stdlib.h>

int week_day(int day, int month)
{
    int a, b, q, w;

 if ((month>12)||(month<1)||(day>31)||(day<1)){
w = -1;
}
else {
if ((month==1)||(month==2)){
  q=1;
} else {
    q=0;
}
a = (((month+9)%12)+1);
b = (((2.6*a)-0.2)-q);
w = (((day+b+5))%7);
}

return w;
}
int main(void)
{
    int d, m, w;
    printf("Insert Date (1-31):\n");
    scanf("%d", &d);
    printf("And month (1-12):\n");
    scanf("%d", &m);

w = week_day(d, m);


if (w==0){
        printf("Sunday\n");
}
    else if (w==1){
        printf("Monday\n");
}
    else if (w==2){
        printf("Tuesday\n");
}
    else if (w==3){
        printf("Wednesday\n");
}
    else if (w==4){
        printf("Thursday\n");
}
    else if (w==5){
        printf("Friday\n");
}
    else if (w==6){
        printf("Saturday\n");
}
    else if (w==-1){
        printf("Error");
}
return 0;
}
