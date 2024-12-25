#include <stdio.h>
#include <string.h>

typedef struct{
	char id[50];
	char name[50];
	int age; 
}hocSinh;

int main(){
	hocSinh list[100];
	FILE *fptr;
	fptr =fopen ("student.txt","w");
	if(fptr == NULL){
		printf("file k ton tai");
		return 1;
	}
	int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar(); 
    for ( int i = 0; i < n; i ++){
    	printf("Sinh vien thu %d: \n",i + 1);
    	printf("ID: ");
    	fgets(list[i].id,50,stdin);
    	list[i].id[strcspn(list[i].id, "\n")] = '\0';
    	printf("Ten: ");
    	fgets(list[i].name,50,stdin);
    	getchar();
    	printf("Tuoi: ");
    	scanf("%d",list[i].age);
    	getchar();	}
	for ( int i = 0; i < n; i ++){
		fprintf(fptr,"ID:%s,Ten:%s,Tuoi:%d\n ",list[i].id,list[i].name,list[i].age);
	}
	fclose(fptr);
}
