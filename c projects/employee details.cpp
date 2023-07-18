#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

struct ball{
	
	int  userID;
	char password[200];
	char firstname[100];
	char lastname[50];
	int age;
	
};
int main()

{
	struct ball naveen;
	struct ball suresh;
	
	printf("\n Please Enter Details of Naveen \n");
	
	printf("Your userID?\n");
	scanf("%s", &naveen.userID);
	
	printf("Please Enter your Password?\n");
	scanf(" %s", naveen.password);
	
	printf("Your first name please?\n");
	scanf("%s", naveen.firstname);
	
	printf("Your last name please?\n");
	scanf("%s", naveen.lastname);
	
	printf("Please Enter your Age?\n");
	scanf("%s", &naveen.age);
	
	printf("\n______________________________________________________________________________\n");
	
	printf("Please Enter details of Suresh\n");
	
	printf("Your userID?\n");
	scanf("%s",&suresh.userID);
	
	printf("Please enter your password?\n");
	scanf("%s", suresh.password);
	
	printf("Please enter your first name?\n");
	scanf("%s", suresh.firstname);
	
	printf("Please Enter your last name\n");
	scanf("%s", suresh.lastname);
	
	printf("PLease enter your Age?\n");
	scanf("%s", &suresh.age);
	
	printf("\n___________________________________________________________________________________\n");
	
	printf("The details Of Naveen Are: \n");
	
	printf("UserId is %s\n",&naveen.userID);
	printf("Password is %s\n",naveen.password);
	printf("Name is %s %s \n",naveen.firstname,naveen.lastname);
//	printf("Last name is %s\n",naveen.lastname);
	printf("Age is %s\n", &naveen.age);
	
	printf("\n_____________________________________________________________________________________\n");
	
	printf("The details of Suresh are: \n");
	
	printf("userID is %s\n", &suresh.userID);
	printf("Password is %s\n",suresh.password);
	printf("Name is %s %s \n",suresh.firstname,suresh.lastname);
//	printf("Lastname is %s\n",suresh.lastname);
	printf("Age is %s\n", &suresh.age);


printf("Thank You very Much For using My Programme");	

return 0;
}