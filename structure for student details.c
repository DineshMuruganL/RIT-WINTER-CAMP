//STUDENT DETAILS USING STRUCTURE
#include<stdio.h>
struct studet
{
char name[10];
int rono,phno;
float s1,s2,s3;
}s;
void main()
{
float avg;
printf("Enter the student name\n");
scanf("%s",s.name);
printf("Enter the Student rollno\n");
scanf("%d",&s.rono);
printf("Enter the Student phno\n");
scanf("%d",&s.phno);
printf("Enter any three subject value to calculate avg\n");
scanf("%f%f%f",&s.s1,&s.s2,&s.s3);
avg=(s.s1+s.s2+s.s3)/3;
printf("**************************************\n");
printf("* STUDENT DETAILS ARE FOLLOWING HERE *\n");
printf("**************************************\n");
printf("Name of the student is : %s\n",s.name);
printf("RollNo of the student is : %d\n",s.rono);
printf("PhoneNo of the student is : %d\n",s.phno);
printf("Average mark of the student is : %f\n",avg);
}

