#include <stdio.h>

int max(int arr[], int n); 

int main(){
    int n;
	    printf("Nhap so phan tu: ");
	    scanf("%d", &n); 
    int arr[n]; 
    int ketqua = max(arr, n); 
    	printf("So lon nhat la: %d\n", ketqua);
    return 0;
}
int max(int arr[], int n){
    int nocnha = arr[0]; 
    	for (int i = 0; i < n; i++){
       		printf("Nhap phan tu thu %d: ", i + 1);
    	    scanf("%d", &arr[i]); 
        if (arr[i] > nocnha) {
            nocnha = arr[i];
        }
    }
    return nocnha; 
}
