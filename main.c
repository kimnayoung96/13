#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	char name[10];
	double grade;
	
};

void main(int argc, char *argv[]) {
	struct student s1 = {24, "�質��", 4.3};
	s1.ID =123456;
	strcpy(s1.name, "�質��");
	s1.grade = 4.3;
	
	printf("ID : %d\n",s1.ID);
	printf("name : %s\n",s1.name);
	printf("grade : %f\n",s1.grade);
	
}
