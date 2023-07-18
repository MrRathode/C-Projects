#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char password[100];
	int x=4;
	int a=0;
	int naveen;
	int i=0;
	
		int lc=0;
		int uc=0;
		int num=0;
		int sym=0;
		
	while(a<2){
		
	
		printf("Please enter your Password in the order of LC UC NUM SYM !!\n ");
		
		printf("Please enter your password?\n");
		scanf("%s",password);
		
		naveen=strlen(password);
		printf("The length of Password is %d\n",naveen);
	
	
	while(i<naveen){
		if(islower(password[i])){
			x--;
			lc++;
			break;
		}
		i++;
	}
 while(i<naveen){
 	if(isupper(password[i])){
 		
 		x--;
 		uc++;
 		break;
	 }
	 
	 i++;
 }	
 
 while(i<naveen){
 	if(isdigit(password[i])){
 		x--;
 		num++;
 		break;
	 }
	 i++;
 }
 
 while(i<naveen){
 	if(isalpha(password[i])){
 		
	 }else if(isdigit(password[i])){
	 } else {
	 	
	 	x--;
	 	sym++;
	 	break;
	 }
	 i++;
 }
 
 if (x==0){
 	printf("You hae Enterd a Secured Password!!\n");
 } else{
 	printf("You haven`t Enterd a secured password! Please Try Again\n");
 }
 a=0;
 
 if(lc==0){
 	printf("PLease Enter lower case Letters\n");
 }
 if(uc==0){
 	printf("Please Enter Upper Case letters\n");
 }
 if(num==0){
 	printf("Please Enter a Number\n");
 }
 
 if(num==0){
 	printf("Please Enter a Symbol\n");
 }
 
 a++;
 
}
return 0;
}