#include <stdio.h>

typedef struct{
	char id[50];
	char name[50];
	int age; 
}hocSinh;

int main(){
	hocSinh list[100];
	FILE *fptr;
	fptr = ("student.txt","w");
	if(fptr == NULL){
		printf("file k ton tai");
		return 1;
	}
	int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar(); 
    for ( int i = 0; i < n, i ++){
    	printf("Sinh vien thu %d: \n",i + 1);
    	printf("ID: ");
    	fgets(list.id,50,stdin);
	}
}
