#include <stdlib.h>
#include<stdio.h>
int main(){
	
	FILE *file1,*file2;
	file1 = fopen("emp.txt", "r");
	if(file1 == NULL){
		printf("File not found!\n");

		exit(0);
	}

	file2 = fopen("copy.txt", "w");

	char data[2000];
	if(fgets(data,2000,file1) != NULL)
		fputs(data,file2);
	fclose(file1);
	fclose(file2);
	printf("Copy from FILE1 to FILE2 Successfull! Files Closed.\n");

	
    return 0;
}
