#include <stdio.h>

int main(){
	char a[100];
	FILE *fptr;
	fptr = fopen("bai1.txt","w");
	if(fptr == NULL){
		printf("khong tim thay file");
		return 1;
	}
	
	printf("Moi ban nhap: ");
	fgets(a,50,stdin);
	getchar();
	
	
	
	fputs(a, fptr);
	
	fclose(fptr);
	
	return 0;
}
