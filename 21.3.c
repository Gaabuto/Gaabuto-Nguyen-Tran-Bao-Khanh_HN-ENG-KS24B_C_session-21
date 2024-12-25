#include <stdio.h>

int main(){
	char a[100];
	FILE *fptr;
	fptr = fopen("bai1.txt","a");
	if ( fptr == NULL){
		printf("khong tim thay file");
		return 1;
	}
	printf("moi ban ghi them vao file: ");
	fgets(a,100,fptr);
	getchar();
	fprintf("%s", a);
	return 0;
}
