#include <stdio.h>

int main(){
	char a;
	FILE *fptr;
	fptr = fopen("bai1.txt","a");
	if(fptr == NULL){
		printf("khong tim thay file");
		return 1;
	}
	a = fgetc(fptr);
	if(a == 0){
		printf("file rong");
		return 1;
	}else{
		fprintf(a,fptr);
	}
		
	
	
	fclose(fptr);
return 0;
}
