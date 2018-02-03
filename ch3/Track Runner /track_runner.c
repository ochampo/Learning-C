#include <stdio.h>
int main(void)
{

   
   int min;
   double sec;
   char a1;
   char a2;
   char a3;
   scanf("%d", &min);
   scanf("%lf",&sec);
   scanf("%c", &a1);
   scanf("%c", &a2);
   scanf("%c", &a3); 
    
	printf (" Time (mm : SS) for runner  %c", a2);
	printf("%c ", a3);
	printf ("%d", min);
	printf(":%.2lf\n", sec );
	// 5800 ft to a mile
	// 3280.84 ft to a kilometer 
	
/*

CALCULATING IN FEET PER SECOND 
we know that we have minutes per miles 

1 min/mile = 88.000002816 fps 

*/	
	
	 
sec = sec/60;
double  newMin = (double) min;

newMin = newMin + sec;

newMin = 88.000002816/newMin;
//printf( "test %.2lf" , newMin);  

printf(" runner %c", a2);
printf("%c", a3);
printf("ran at a speed of %.1lf", newMin);
newMin = newMin *  0.3047999902464;
printf("feet per second or"); 
printf(" %.1lf ", newMin );
printf(" Meter per second \n " ); 


/*

Meter per second 

 1 fps = 0.3047999902464 mps


*/

//printf( "test %.2lf" , newMin);


   return 0;



}
