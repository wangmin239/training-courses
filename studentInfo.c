#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudentInfo {
	int id;
	char name[20];
} StudentInfo;

void print(StudentInfo stuArray[], int len)
{
	while (--len >= 0) {
		fprintf(stdout, "Id: %d, Name :%s\n", stuArray[len].id, stuArray[len].name);
	}
	return;
}

int main(int argc, char* argv[])
{
	int num;
	int i;
	StudentInfo *studentArray;
	if (argc != 2) {
		fprintf(stdout, "input error, the program requires two arguments.\n");
		return -1;
	}
	
	num = atoi(argv[1]);
	studentArray = calloc(num, sizeof(StudentInfo));
	if (studentArray == NULL) {
		fprintf(stdout, "error: memory isn't able to be alloced.\n");
		return -1;
	}

	for (i = 0; i < num; i++) {
		fprintf(stdout, "input id:");
		fscanf(stdin, "%d", &studentArray[i].id);
		fprintf(stdout, "input name:");
		fscanf(stdin, "%s", studentArray[i].name);
	}
	fprintf(stdout, "\n\n^_^ print the inforamtion of the registerd student. ^_^\n\n");
	print(studentArray, num);
	return 0;
}
	

	