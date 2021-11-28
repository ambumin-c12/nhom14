//bai luan 4:Nguyen The Duc 1505
#include<stdio.h>
void nhap(int n,int a[]){
	for(int i=0;i<n;i++){
		printf("\n nhap gia tria[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\n %d",a[i]);
		printf("\t");
	}
}
int count(int a[],int n, int x){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==x)
		dem++;
		}
	return dem;	
}
void sap_xep(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			int temp;
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int so_nho_hon(int *a, int n, int x){
	int c;
    for(int i=0;i<n;i++){
        if(a[i]==x)
         c=a[i-count(a,n,x)];   
    }        
return c;
}
int giai_thua(int c){
	if(c==1)
		return 1;
	return c*giai_thua(c-1);	
}
int main(){
	int a[100];
	int n;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	nhap(n,a);
	xuat(a,n);
	//bai 1
	int x;
	printf("\n nhap x");
	scanf("%d",&x);
	printf("so lan xuat hien cua x=%d",count(a,n,x));
	//bai 2
	sap_xep(a,n);
	printf("\nso nho gan x nhat y=%d",so_nho_hon(a,n,x));
	printf("\ngia thua cua y=%d",giai_thua(so_nho_hon(a,n,x)));
	
}
