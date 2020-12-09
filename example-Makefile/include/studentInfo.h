#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudentInfo {
	int id;
	char name[20];
} StudentInfo;

void printStudentInfo(StudentInfo stuArray[], int len);
