#include <math.h>
#include <stdio.h>

int main (void)
{
   // long pred;
    int future;
    double rate;
    int time;
    double exponent;

    //pert
    scanf ("%d", &future);
    scanf ("%lf", &rate);
    time = future - 2018;
    exponent = (rate/100) * time;
   printf("Exponent test test%lf", exponent); 
     
       //printf("test%lf", exp(exponent)); 
       double test =pow(2.71828,exponent)*7632819325;
    long long int pred =  (long long int) test;
    printf( "\n test pow%lf\n ",test); 
    printf("Prediction year is %d\n", future);
    printf("Predicted growth rate is %lf\n", rate);
    printf("%d years after 2018, the world population is expected to be %lli\n", time, pred);
    return 0;
    
}
    
    
