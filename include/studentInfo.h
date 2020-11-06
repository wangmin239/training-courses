#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudentInfo {
	int id;
	char name[20];
} StudentInfo;

void print(StudentInfo stuArray[], int len);
