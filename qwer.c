#include <stdio.h>
#include <string.h>

typedef struct{
	char bookId[100];
	char title[100];
	char author[100];
	int price;
	char genre[100];
}Book;

void saveBook(Book book[],int size);
void loadBook(Book book[],int size);
void infoBook(Book book[], int size);
void showBook(Book book[], int size);

int main(){
	
	Book book[100];
	int choose,size;
	do{
		printf("MENU\n1. nhap so luong va thong tin sach\n2. luu thong tin sach vao file\n3. lay thong tin sach tu file\n4. hien thi thong tin sach\n5. thoat\nLua chon cua ban la: ");
		scanf("%d",&choose);
		getchar();
		switch(choose){
			case 1:{
				printf("moi nhap so luong sach: ");
				scanf("%d",&size);
				getchar();
				saveBook(book,size);
				
				break;
			}
			case 2:{
				loadBook(book,size);
				break;
			}
			case 3:{
				infoBook(book,size);
				break;
			}
			case 4:{
				showBook(book,size);
				break;
			}
			case 5:{
				break;
			}
			default:{
				printf("lua chon k hop le, moi ban nhap lai!");
				break;
			}
			
		}
		
	}while(choose != 5);
	printf("Goodbye !");
}


void saveBook(Book book[],int size){
	for (int i = 0; i < size; i ++){
		printf("moi ban nhap thong tin sach thu %d:\n", i + 1);
		printf("Ma sach: ");
		fgets(book[i].bookId,100,stdin);
		book[i].bookId[strcspn(book[i].bookId,"\n")] = '\0';
		printf("Ten sach: ");
		fgets(book[i].title,100,stdin);
		book[i].title[strcspn(book[i].title,"\n")] = '\0';
		printf("Tac gia: ");
		fgets(book[i].author,100,stdin);
		book[i].author[strcspn(book[i].author, "\n")] = '\0';
		printf("Gia sach: ");
		scanf("%d",&book[i].price);
		getchar();
		printf("The loai: ");
		fgets(book[i].genre,100,stdin);
		book[i].genre[strcspn(book[i].genre,"\n")] = '\0';
	}
}

void loadBook(Book book[],int size){
	FILE *file;
	file = fopen("baitap1.bin","wb");
	if(file == NULL){
		printf("file k ton tai\n");
		return 1;
}	
	fwrite(&size,sizeof(int),1,file);
	fwrite(book,sizeof(Book),size,file);
	fclose(file);
}

void infoBook(Book book[],int size){
	FILE *file;
	file = fopen("baitap1.bin","rb");
	if(file == NULL){
		printf("file k ton tai\n");
		return 1;
	}
	fwrite(&size,sizeof(int),1,file);
	fwrite(book,sizeof(Book),size,file);
	
	
	fclose(file);
}


void showBook(Book book[],int size){
	if ( size == 0){
		printf("Khong co sach de hien thi\n");
	}else{
		for ( int i = 0; i < size; i ++){
			printf("Thong tin sach %d:\n",i + 1);
			printf("ID: %s\n",book[i].bookId);
			printf("Ten: %s\n",book[i].title);
			printf("Gia tien: %d\n",book[i].price);
			printf("The loai: %s\n",book[i].genre);
		}
	}
}

