#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char *password[200];
	int i=0;
	int x=4;
	int naveen;
	
	printf("Please Enter Password?");
	scanf("%s",&password);
	
    naveen= strlen(*password);
    printf("The number of characters are %d",naveen);
    
    while(i<naveen){       
    
    	if(isupper(password)) {
    		
    		x--;
    		printf("Entered Upper Case Letter");
    		break;
		}
		i++;
	}
	while(i<naveen){       
		if(islower(password)){
		
			x--;
			printf("Entered Lower Case letter");
			break;
		}
		i++;
	}
	while(i<naveen){       
		if(isdigit(password)){
		
			x--;
			printf("Entered a number");
			break;
		}
		i++;
	}
	while(i<naveen){        
	 if(isalpha(password){
	 }else if(isdigit(password)){
	 } else {
	 	x--;
	 	printf("Enterd a Special character");
	 	break;
	 }
	 return 0;
}
		               