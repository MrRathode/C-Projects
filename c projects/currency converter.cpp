#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	
	char naveen;
	int money, a,b,c;
	
	printf("Currency you want to convert?\n");
	scanf("%s",&naveen);
	
	printf("how much you want to convert?\n");
	scanf("%d",&money);
	
	switch(naveen){
		case '1':  a=(money*75);//1 means dollar
		              printf("Total Amount in dollars  %d",a);
		              break;
		              
		 case '2' :b=(money*84);//2 means euro
		               printf("Total Amount in euros %d",b);
		              break;
		              
		 case '3' :c=(money*100);//3 means pounds
		                printf("total amount in pounds %d",c);
						break;    
						
		Default      : printf("please enter above mentioned converters only");  
	}
	return 0;
}