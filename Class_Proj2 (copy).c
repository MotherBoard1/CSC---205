#include <stdio.h>

int main()
{
double CSC201;
double CSC205;
double STA205;
printf("Put in score for CSC 201: ");
scanf("%lf", &CSC201);
printf("Put in score for CSC 205: ");
scanf("%lf", &CSC205);
printf("Put in score for STA 205: ");
scanf("%lf", &STA205);
double Total;
float Average;
float Percent;
float Man;

Total = CSC201 + CSC205 + STA205;
Average = Total/3;
Man = Average * 100.0;
Percent = Man/100.0;

printf("The Total is %f", Total ); "\n";
printf("The Average is %f", Average); "\n";
printf("The Percentage is %f", Percent); "\n";






}
