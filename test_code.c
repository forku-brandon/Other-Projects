
/* rogram to process marks of students and display Grades */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void first_level(int){             
struct student{
    char name[25];
    char dpm[45];
    int marks;
    char grade;
    char matricule[10];
};

{
 struct student stud[20];
    int i,n;
    int num =1;
    int cemester;
    char course_name[30];
          int ave;
    ave = 0;

/* Get the number of students */
 printf("ENTER IN NUMBER FORM THE CEMESTER YOU ARE PRESENTLY IN==>");
 scanf("%d", &cemester);
 printf("\n");
 printf("ENTER THE NAME OF THE COURSE TO BEGIN WITH(use the '_' sign if the words is space up):==>");
 scanf("%s", course_name);
  printf("\n");
    printf("ENTER THE NUMBER OF STUDENTS IN CLASS==>:\n");
    scanf("%d",&n);
  
/* Get the value of Students marks*/
    for(i=0;i<n;i++)
    {
        printf("ENTER STUDENT INFORMATION==>:\n");
        printf("THE NAME OF STUDENT[%d]==>:", num);
        scanf("%s", stud[i].name);
         printf("\n");
        printf("DEPARTMENTOF STUDENT[%d]==>:", num);
        scanf("%s",stud[i].dpm);
         printf("\n");
           printf("MATRICULE NUMBER OF STUDENT[%d]=>:", num);
        scanf("%s",stud[i].matricule);
         printf("\n");
        printf("ENTER THE  MARKS OF STUDENT[%d]::(in percent)=>:", num);
        scanf("%d",&stud[i].marks);
        printf("\n");
        num +=1;
        ave +=stud[i].marks;

    }
   
    ave = ave / n;
      int pass;
           pass = 0;
/* Print student information*/
    for(i=0;i<n;i++)
  {
         
          
        if(stud[i].marks <= 50) 
        { 
            stud[i].grade = 'F'; 
            pass +=0;
            }
        else if(stud[i].marks > 50 && stud[i].marks <= 55) 
        {  pass +=1;
         stud[i].grade = 'E';
         
         }
         
        
         
        else if(stud[i].marks > 55 && stud[i].marks <= 60) 
        {  pass +=1;
          
            stud[i].grade = 'D'; 
         
        } 
        else if(stud[i].marks > 60 && stud[i].marks <= 75) 
        {  pass +=1;
            stud[i].grade = 'C'; 
            
        } 
        else if (stud[i].marks > 75 && stud[i].marks <= 90) 
        {  pass +=1;
            stud[i].grade = 'B'; 
        
        } 
        else if(stud[i].marks > 90)
        { pass +=1;
            stud[i].grade = 'A';
        
        }
    }
     for(i = 0;i<75;i++)
   printf("_");
    printf("\n");
    printf("----DATA BASE OF STUDENT WHO WROTE %s IN THE NUMBER%d CEMESTER-----\n", course_name, cemester);
    for(i = 0;i<75;i++)
    printf("_");
    printf("\n");
    printf("|num\t|Name\tDEPART \t|MART\t|marks\t|Grade|\n");
    for(i = 0;i<75;i++)
    printf("_");
    printf("\n");
     
    for(i=0;i<n;i++)
        {
         
        printf("%d\t|%s\t|%s\t|%s\t|%d\t|%c\n|",i+1,stud[i].name, stud[i].dpm, stud[i].matricule, stud[i].marks, stud[i].grade);
}
   for(i = 0;i<75;i++)
   printf("_");
   printf("\n");
printf("class average is : %d\n", ave);
printf("NUMBER PASS : %d\n", pass);
int failed;
failed = n-pass;
printf("NUMBER failed: %d\n", failed);

   for(i = 0;i<75;i++)
   printf("_");
   printf("\n");

}}
//    getch();
int main(){
   char y;
    int amount;
    printf("ENTER THE NUMBER OF COURSES YOU WANT TO REGISTER==>");
        scanf("%d", &amount);
         printf("\n");
for(int i =0; i<amount; i++){
   first_level(5);
   printf("click x : to terminate the process, OR  click anny other button on your key board to continiour with the course registration");
   scanf("%s",&y);
    printf("\n");
   if(y == 'x'){
    break;
   }else{
    first_level(5);
   }

}
return 0;
}
       
