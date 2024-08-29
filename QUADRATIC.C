#include<stdio.h>
#include<math.h>
// the <maths> is used to import some math function from the math libery//
int main(){

    float a, b, c, rt1, rt2, s, rti1, rti2;
    //i ma assigningthe variable that i will use in thids program//
    printf("THE EQUATION SHOULD BE OF THE FORM ax^2+bx+c=0");
    printf("enter the value for a/n");
    scanf("%f", a);
    printf("enter the value for b/n");
    scanf("%f", b);
    printf("enter the value for c/n");
    scanf("%f", c);
    s = (b*b-4.0*a*c); //calculating the descriminant//
    if(s==0){
  
   rt1=-b/2.0*a;

   rt2 =-b/2.0*a;
   printf("the root are");
   printf("x1=: %f" rt1);
    printf("x2=: %f" rt2);
 }else if(s > 0){
      s=sqrt(s);
   rt1=-b+s;
   rt1=rt1/2.0*a;
   rt2= -b-s;
   rt2 =rt2/2.0*a;
   printf("the root are");
   printf("x1=: %f" rt1);
    printf("x2=: %f" rt2);
} else if(s < 0){
    s =sqrt(0-s);
    //this is use to elliminate the nagative sign that is found in the s variable//
    rt1=-b/2.0*a;
    rti1 = s/2.0*a;
    rt2 = -b/2.0*a;
    rti2 =s/2.0*a;
    printf("the root are");
    printf("x1=: %f"rt1"+: %f"rti1"i");
    printf("x2=: %f"rt2"-: %f"rti2"i");
}
return 0;

}