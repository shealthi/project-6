#include<stdio.h>
#include<conio.h>
struct student
{
	char NAME[30];
	int R_NO;
	char BRANCH[30] ;
};

 main()

{
	 label1:
	struct student s;
	printf("enter the student name,ROLL NUMBER,branch:");
	gets(s.NAME);
	scanf("%d",&s.R_NO);
		scanf("%s",&s.BRANCH);
		printf("\nstudent details");
		printf("\nNAME:%s",s.NAME);
		printf("\nR_NO:%d",s.R_NO);
		
			printf("\nBRANCH:%s",s.BRANCH);
		
			getch();
			goto label1;
	}
