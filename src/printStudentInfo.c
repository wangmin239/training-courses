#include "studentInfo.h"


void printStudentInfo(StudentInfo stuArray[], int len)
{
	while (--len >= 0) {
		fprintf(stdout, "Id: %d, Name :%s\n", stuArray[len].id, stuArray[len].name);
	}
	return;
}

	

	
