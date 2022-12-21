#include<stdio.h>
#include<conio.h>
int main()
{
int d1 , d2 , m1 , m2 , y1 , y2 , y , m ,d ;
printf("\t***Welcome in DoB Calculator***\n");
printf("Enter your Date of birth as d1 , m1 and y1\n");
scanf("%d%d%d", &d1 , &m1 , &y1);
printf("Enter Today Date  as d2 , m2 and y2\n");
scanf("%d%d%d", &d2 , &m2 , &y2);
y = y2-y1;
m = m2-m1;
d = d2-d1;
if(d1<=d2 && m1<=m2 && y1<=y2){
    printf("your age is %d year %d month %d days\n", y2-y1 , m2-m1 , d2-d1 );
}
do{
if(m1>m2 && y1<y2 && d1<d2){
    printf("your age is %d year %d month %d days\n" , y-1 , m2+12-m1 , d);
    break;
}
else if(d1>d2 && m1<m2 && y1<y2){
    printf("your age is %d year %d month %d days\n" , y , m-1 , d2+30-d1);
    break;
}
else{
    printf("your age is %d year %d month %d days\n" , y-1 , m2+12-m1-1 , d2+30-d1+1);
    break;
}
}while(y1>y2);
getch();
return 0;
}