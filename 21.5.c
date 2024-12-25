#include <stdio.h>

int main(){
	int number;
	char a[50];
	FILE *fptr;
	fptr = fopen( "bt05.txt","w");
	if ( fptr == NULL){
		printf("File rong");
		return 1;
	}
	
	printf("Moi ban nhap so dong ban muon:");
	scanf("%d",&number);
	getchar();
	for ( int i = 0; i < number; i ++){
		printf("moi ban nhap dong thu %d: ",i+1);
		fgets(a,sizeof(a),stdin);
		fputs(a,fptr);
	}
	fclose(fptr);
	
	fptr = fopen("bt05.txt","r");
	if ( fptr == NULL){
		printf("File rong");
		return 1;
	}
	printf("noi dung trong file la:\n");
	while(fgets(a,sizeof(a),fptr) != NULL){
		printf("%s", a);
	}
	
	fclose(fptr);
	return 0;
}

