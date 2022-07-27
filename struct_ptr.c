#include<stdio.h>
#include<stdlib.h>

typedef struct stu
{
	char name[20];
	int rollno;
}S;


int main()
{
S *ptr;

ptr=(S*)malloc(sizeof(S));

printf("Enter name: ");
scanf("%s",ptr->name);

printf("Enter roll number: ");
scanf("%d",&ptr->rollno);

printf("Name = %s\nRoll No. = %d\n",ptr->name,ptr->rollno);

free(ptr);
return 0;
}

