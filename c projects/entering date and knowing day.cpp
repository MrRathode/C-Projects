# include <stdio.h>
# include <conio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //momth=days
 char week[7][10] ;  //should not more than 10
 int date, mon, year, i, r, s = 0 ;

 strcpy(week[0], "Sunday") ; //replaces
 strcpy(week[1], "Monday") ;
 strcpy(week[2], "Tuesday") ;
 strcpy(week[3], "Wednesday") ;
 strcpy(week[4], "Thursday") ;
 strcpy(week[5], "Friday") ;
 strcpy(week[6], "Saturday") ;

 printf("Enter a valid date (dd/mm/yyyy) : ") ;
 scanf("%d / %d / %d", &date, &mon, &year) ;

 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) //leap year condition

  month[1] = 29 ;

 for(i = 0 ; i < mon - 1 ; i++)

  s = s + month[i] ;

 s = s + (date + year + (year / 4) - 2) ;

 s = s % 7 ;

 printf("\n     The day is : %s     ", week[s]) ;


 printf("\n  ********* Thanx for using my programme *************\n"); //any doubts feel free to contact.

return 0;

}
