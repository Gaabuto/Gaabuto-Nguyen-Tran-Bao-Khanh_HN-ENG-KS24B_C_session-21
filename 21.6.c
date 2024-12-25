#include <stdio.h>

int main(){
	FILE *b1, *b6;
	char a[50];
	b1 = fopen("bai1.txt","r");
	if(b1 == NULL){
		printf("khong the mo file");
		return 1;
	}
	
	b6 = fopen("bt6.txt","w");
	if (b6 == NULL){
		printf("k the mo file");
		return 1;
	}
	while ( fgets(a,sizeof(a),b1) != NULL){
		fputs(a,b6);
	}
	fclose(b1);
	fclose(b6);
	
	return 0;
}
