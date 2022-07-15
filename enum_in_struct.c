#include<stdio.h>
#include<string.h>


typedef struct stu
{
	char name[20];
	enum gender{Male=1,Female,Other}g;
}S;

int main()
{
S stu;
char str[20];

printf("Enter Name: ");
scanf("\n%[^\n]s",stu.name);

printf("Enter gender(Male=1, Female=2, Others=3): ");
scanf("%ud",&stu.g);

printf("\nName = %s\n",stu.name);

if(stu.g==Male)
	printf("Gender = Male\n");
else if(stu.g==Female)
	printf("Gender = Female\n");
else
	printf("Gender = Others\n");



strcpy(stu.name,"Ramu");
stu.g=1;
printf("\nName = %s\nGender = Male\n",stu.name);
return 0;
}
