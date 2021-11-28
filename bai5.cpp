#include <stdio.h>
void doi (int a,int d,int c[]){
int k ;
k=c[a];c[a]=c[d];c[d]=k;

}
int main (){
	int a[100];
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
	for (int i=0;i<n;i++){
	printf("nhap phan tu%d=",i);
	scanf ("%d",&a[i]);
	}
	
//	for (int i=0;i<n;i++){
//	if(a[min]>a[i])
//	min=i;
//	}
//printf ("%d",min);	
//	doi(0,min,a);
//		for (int i=0;i<n;i++){
//	printf ("gia tri%d=%d\n",i,a[i]);
//	}
//	for (int i=1;i<n;i++){
//	if(a[min]>a[i])
//	min=i;
//	}
//	doi(1,min,a);
//	printf("lan1\n");
//	
//	for (int i=2;i<n;i++){
//	if(a[min]>a[i])
//	min=i;
//	}
//	doi(2,min,a);
//	for (int i=0;i<n;i++){
//	printf ("gia tri%d=%d\n",i,a[i]);
//	}printf("lan1\n");
//	
	
	for(int j=0;j<n-1;j++){
		int max;
	max=j;
	 for (int i=j;i<n;i++){
	if(a[max]<a[i])
	max=i;
	}
	doi(j,max,a);
	}
	for (int i=0;i<n;i++){
	printf ("%d\t",a[i]);
	}
	
return 0;
}
