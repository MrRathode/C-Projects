#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float a=40;                         //    Water bottle
	float b=30;                    //    Napkins
	float c=200;                  //   Towel
	float d=700;                 //   chair
	float e=199;                //  cartons
    float f=1100;                  //  shoes
    float g=399;                //  T-Shirt
    float h=160;               //  DiaryMilk
	float i=10;           //  Kit Kat
    float k=30;

	int age,contact;
	char pin;

	 char name, address,bought, gender;

	 int  naveen ;

char ccard,dcard,cash;

	 printf(" *****************Welcome To Our store sir********************\n");



	 printf(" May I know your name?\n");
	 scanf("\n %s",&name);

	 printf(" Your age?\n");
	 scanf("\n%d",&age);

	 printf(" Your contact number please?\n");
	 scanf("\n%d",&contact);

	 printf(" Your address please sir?\n");
	 scanf("\n%s",&address);

	 printf("a is waterbottle\n");
	 printf("b is Napkins\n");
	 printf("c is Towels\n");
	 printf("d is Chair\n");
	 printf("e is Cartons\n");
	 printf("f is shoes \n");
	 printf("g is T-Shirt\n");
	 printf("h is Diary milk\n");
	 printf("i is kitkat\n");
     printf("j is Oreo\n");


	  printf("Please show me What You have bought \n");
	 scanf("\n %s",&bought);

	 char newBought=tolower(bought);//if you enter captail letter,it will take take input as small letter


	 switch(newBought){

	 	case 'a'  :  printf("your bill for water Bottle is 40rs\n");
	 	                      break;
        case 'b'      : printf("Your bill for Napkins is 30rs\n");
                              break;
        case 'c'        : printf("Your bill for towel is 200rs\n");
                              break;
        case 'd'         : printf("Your bill for Chair is 700rs\n");
                              break;
        case 'e'      : printf("Your bill for Cartons is 199rs\n");
                              break;
        case 'f'         : printf("Your bill for shoes is 1100\n");
                              break;
        case 'g'       : printf("Your bill for T-Shirt is 399rs\n");
                              break;
        case 'h'    : printf("Your bill for Diary Milk is 160rs\n");
                              break;
        case 'i'       : printf("Your bill for Kit kat is 10rs\n");
                               break;
        case 'j'         : printf("Your bill for Oreo is 10rs\n");
                              break;


        default          :printf("\n PLease choose the variables___I`m having only those groceries in my store \n");
                          break;


 	 case 'default'       :break;


	 }

	 printf("\n In which mode You want pay cash sir!( cash)? \n");
	 scanf("%d",&naveen);
	 /*if(naveen==cash) {//cash

             if(naveen==ccard){   //credit card

                    printf("\n Please give me your credit card sir? \n");

	 	printf("\n Please Enter Your pin? \n");
	 	scanf("%s",&pin);
	 } else{


	 	printf("\n Please give me your debit card sir? \n");

	 	printf("\n Please Enter Your pin? \n");
	 	scanf("%s",&pin);
    	 }
}
    	 else{
*/
    	  printf("   *******Please give me cash sir *********  \n \n ");


          printf("       Thank you very much sir!! \n");


printf("\n                  Please visit Again!!       \n");

return 0;
}
