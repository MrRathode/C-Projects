#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<conio.h>

int main()
{
	int month[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
	
	char week[7][10];
	
	strcpy(week[0],"Sunday");
	strcpy(week[0],"Monday");
	strcpy(week[0],"Tuesday");
	strcpy(week[0],"Wednesday");
	strcpy(week[0],"Thursday");
	strcpy(week[0],"Friday");
	strcpy(week[0],"Saturday");	
	
	char i,date,month,year,s=0;
	
	
	printf("     Enter the date?\n     DD MM YY\n");
	scanf(" %d \t %d \t %d",&date,&month,&year);
	
	if ( (year % 400 ==0) ||  (year % 4 ==0)  &&  if( year % 100 !=0))
		
		month[1]=29;
		
		for(i=0;i<month-1;i++)
	
	s=s+month-1;
	
	s=s+(date + year + (year/4)-2);
	
	s= s%7;
	
	printf("The day is %s",week[s]);
	
	
	
	
	
}