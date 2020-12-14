#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "schedule.h"
#include "linkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int exit_flag = 0;
	FILE *fp;
	
	char name[200];
	char place[100], typeName[100];	
	size_t size;
	int month;
	int day;
	int type;
	void *list;
	void *ndPtr;
	void *schedInfo;
	int option;
	int cnt;
	
	//1. FILE pointer open & error handling
	//fill code here ----
	fp=fopen("schedule.dat","r");
	if (fp ==NULL)
	{
		return -1;
	}	
	while((list=fgetc(fp)) !=EOF)
	{
		printf("%c",list);
	}
	
	//initializing the list
	printf("Reading the data files... \n");
	list = (void*)list_genList();
	

	return 0;
}

