#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>

int main()
{
	int n,r,s=0,c;
	printf("Please Enter your Number?\n");
	scanf("%d",&n);
	
	c=n;
	FILE *pNaveen;
	pNaveen=fopen("virat.txt","a");
	
	while(n>0){
		
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	
	if(c==s){
		fprintf(pNaveen,"Its a palindrome Number!!");
	} else {
	   fprintf(pNaveen,"Its not a palindrome Number!!");
	}	
}