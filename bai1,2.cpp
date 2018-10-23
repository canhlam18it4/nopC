#include<stdio.h>
#include<conio.h>
void Nhapmang(int Array[100],int n)
{
for (int i=0;i<n;i++)
    {
		printf(" nhap phan tu cua mang [%d]",i);
		scanf("%d",&Array[i]);
	}	
}
void inmang(int Array[100],int n ){
	for (int i=0;i<n;i++)
	{
		printf(" mang[%d]=%d", i,Array[i]);
	}
	
}
int main(){
	int n,Array[100];
	int min,tong;
printf(" nhap so phan tu cua mang");
scanf("%d",&n);
Nhapmang(Array,n);	
inmang(Array,n);
}



