#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>

int main()
{
	
	//If you small letter as input it takes capital letrters as output
	
	int virat;
	int x;
	

	
   printf("Enter anything?");
   scanf("%c",&virat);
   char newVirat=toupper(virat);
   
 
 switch(newVirat){
 	case  'A'    :  printf("This is Naveen Rathod\n");
 	                break;
 	case  'B'    :  printf("It's about case B\n");
 	                break;
 	case  'C'    :  printf("It's about case C\n");
 	                break;
 	case  'D'    :  printf("It's about case D\n");
 	                break;
    
    default      : printf("this is default printing\n");
      }




	return 0;
}
