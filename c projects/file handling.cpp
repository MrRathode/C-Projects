#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>
#include<string.h>

int main(){
	
	int naveen, praveen, sunil, books;
	
	FILE *pTissues;
	
	pTissues=fopen("naveen.txt","r");
	
	fprintf(pTissues,"I wnt write something!");
	
	fclose(pTissues);
	
	return 0;
}