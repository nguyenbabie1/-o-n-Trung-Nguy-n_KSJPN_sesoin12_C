#include <stdio.h>

int pophech(int n);
int main(){
	int a,b; 
	printf("Nhap so thu nhat : ");
	scanf("%d",&a);
	printf("Nhap so thu hai :");
	scanf("%d",&b);
	
	//kiem tra so thu nhat 
	if(pophech(a)){
		printf("%d La so hoan hao ",a);
	}
	else{
		printf("%d Khong la so hoan hao ",a);
	}
	//kiem tra so thu 2
	if(pophech(b)){
		printf("%d La so hoan hao ",b);
	}
	else{
		printf("%d Khong la so hoan hao ",b);
	}
	return 0;
}
int pophech(int n){
	if(n<=1){
		return 0;
	}
	int sum=0; 
	for(int i=1; i<=n/2 ; i++){
		if(n% i ==0){
			sum+=i;
		}
	}
	return sum==n?1:0;// true neu tong cac uoc bang n , nguoc lai tra ve 0
}
