
#include <stdio.h>
int main(){
int Basic_salary;
int Dearness_allowance;
int House_rent_Allowance;
printf("Enter Ramesh's Basic salary= ");
scanf("%d",&Basic_salary);
Dearness_allowance=(Basic_salary/100)*40;
House_rent_Allowance=(Basic_salary/100)*20;
int sum=Basic_salary+Dearness_allowance+House_rent_Allowance;
printf("Ramesh's gross salary= %d",sum);







}
