#include <stdio.h>

void mang(int arr[],int n);
int main(){
	int arr[50];
	int n;
		printf("Moi ban nhap so phan tu: ");
		scanf("%d",&n);
		mang(arr,n);	
	}
void mang(int arr[],int n){
	for(int i=0; i<n ;i++){
		printf("Nhap so phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
		}		
		printf("Mang da nhap la: ");
	for(int i=0; i<n ;i++){
		printf("%d\t",arr[i]);
		}
		printf("\n"); 
	}
