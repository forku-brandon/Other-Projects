#include<stdio.h>
#include<math.h>
#include<string.h>
// the <maths> is used to import some math function from the math libery//
int main(){

      float a, b, c, rt1,t ;
      float rt2, s, r, m;
      float rti1, rti2, l;
       char x;
    //i am assigning the variable that i will use in thids program//
    printf("welcome to the quadratic equation solver\n");
    printf("_________________________________\n");
  while(x !='x'){
      printf(" you can click x if you want to exit the program or any other botten to continiour\n");
    scanf("%s/n", &x);
      x=x;
        
    printf("THE EQUATION SHOULD BE OF THE FORM ax^2+bx+c=0 \n");

    printf("enter the value of  a, b and c respectively\n");
    scanf("%f%f%f", &a, &b, &c);
    
    l= b * b ;
    r = 4.0 * a * c;
     //calculating the descriminant//
   s=l-r;  
   printf( "%f \n", s);
    if(s==0){
  
   rt1=- b /(2.0*a);
   rt2=- b /(2.0*a);
 printf("the root are\n");
    printf(" x1=%f\n", rt1);
       printf("x2=%f\n", rt2);
 }else if(s > 0){
      m=sqrt(s);
      t= -b+m;
        rt1 = t/(2*a);
      t= -b-m;
      rt2 = t/(2*a);
  
   printf("the root are\n");
   printf("x1=%f\n",  rt1);
    printf("x2=%f\n",  rt2);
} else if(s < 0){
    s =sqrt(0-s);
    //this is use to elliminate the nagative sign that is found in the s variable//
    rt1= 0-b / (2*a);
    rti1 = s / (2*a);
    rt2 = 0-b/(2*a);
    rti2 =s/(2*a);
    printf("the root are\n");
    printf( "x1=: %f", rt1);
    printf(" + %f", rti1);
    printf("i\n");
   
    printf("x2=: %f", rt2);
    printf("- %f", rti2);
    printf("i\n");
   } else{
        printf("Invalid input please try again");
}}
return 0;

}