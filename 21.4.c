#include <stdio.h>

int main(){
	
	char a[100];
	FILE *fptr;
	fptr = fopen("bai1.txt","r");
	if( fptr == NULL){
	printf("khong tim thay file");
	return 1;
	}
	if( fgets(a,sizeof(a), fptr) != NULL ){
		printf("Dong dau tien: %s",a);
	}else{
		printf("file rong");
		return 1;
	}
	fclose (fptr);
	return 0;
}
