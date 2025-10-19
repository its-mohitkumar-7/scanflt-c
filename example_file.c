#include"scanflt.h"
#include<stdio.h>

int main(){
  int         a1, a2;
  float       b1, b2;
  double      c1, c2;
  char        d1, d2;
  char    e1[50], e2[50];
  char    f1[50], f2[50];

    getint(&a1,"This is getint with statement argument: ");
    getint(&a2,"");
    
    getfloat(&b1,"This is getfloat with statement argument: ");
    getfloat(&b2,NULL);

    getdouble(&c1,"This is getdouble with statement argument: ");
    getdouble(&c2,"");
    
    getch(&d1,"This is getch with statement argument: ");
    getch(&d2,"");
    
    getstr(e1,"This is str getstr with statement argument: ");
    getstr(e2,"");
    
    getstrbuff(f1,sizeof(f1),"This is getstrbuff with statement argument: ");
    getstrbuff(f2,sizeof(f2),NULL);

    printf("\n\n");

    printf("This is a1: %d    This is a2: %d\n",a1,a2);
    printf("This is b1: %f    This is b2: %f\n",b1,b2);
    printf("This is c1: %lf    This is c2: %lf\n",c1,c2);
    printf("This is d1: %c    This is d2: %c\n",d1,d2);
    printf("This is e1: %s    This is e2: %s\n",e1,e2);
    printf("This is f1: %s    This is f2: %s\n",f1,f2);

return 0;
}


/*This is example_file of Scanf-Filter Library in C.

getint(&<variable_name>,Message/NULL)                              for Integer
getfloat(&<variable_name>,Message/NULL)                            for Float
getdouble(&<variable_name>,Message/NULL)                           for Double
getch(&<variable_name>,Message/NULL)                               for Character
getstr(<variable_name>,Message/NULL)                               for String
getstrbuff(<variable_name>,sizeof(<variable_name>,Message/NULL))   for Buffer String



Author: Mohit Kumar
Email: mohitkumarkk0704th@gmail.com
Github: https://github.com/its-mohitkumar-7
Created: 19/10/2025
Location: India
*/
