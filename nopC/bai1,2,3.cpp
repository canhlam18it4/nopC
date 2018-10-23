#include<stdio.h>
#include<conio.h>
void Nhapmang(int Array[100],int n)
{
	int tong=0;
	for (int i=1;i<=n;i++)
    {	int s=1;
		printf(" nhap phan tu cua mang [%d]",i);
		scanf("%d",&Array[i]);
		int j=Array[i];
		for (int i=1;i<=j;i++)
		{
			s=s*i;
		}
		tong=tong+s;
	}	
printf("Tong la: %d",tong);
}
void inmang(int Array[100],int n ){
	for (int i=1;i<=n;i++)
	{
		printf(" mang[%d]=%d", i,Array[i]);
	}
	
}

int giaithua(int n)
{ int s=1;
for (int i=1;i<=n;i++)
{
	s=s*i;
}
return s;
}
int main(){
	int n,Array[100];
	int min,tong;
printf(" nhap so phan tu cua mang");
scanf("%d",&n);
Nhapmang(Array,n);
inmang(Array,n);	
}



