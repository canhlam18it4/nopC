#include <stdio.h>
#include <conio.h>
void NhapMang(int *array,int n)
{
	for (int i=0;i<n;i++)
		{
			printf(" array[%d] ", i);
			scanf("%d",array+i);
		}
}
void InMang(int *array, int n)
{
	for (int i=0;i<n;i++)
	{
		printf("\n array[%d]=%d",i,*(array+i));
	}
}
int minam(int *array, int n)
{ 

for  (int i=0;i<n;i++)
{	
	if ( *(array+i)<0)
	return *(array+i);
}
return -1;
}

int behontrumuoi ( int *array, int n)
{ int dem=0;
	for (int i=0;i<n;i++)
	{
		if ( *(array+i) <-10)
		dem++;
	}
	return dem;
}
int tbchan( int *array, int n)
{ 	int tong=0,dem=0,tb=0;
	 for ( int i=0;i<n;i++)
	 {
		 if (*(array+i)%2==0)
		 { tong=tong + *(array+i);
		 	dem++;
		 }
		 tb=(int)(tong/(double)dem);
	 }
	 return tb;
}

int main ()
{
	int array[100];
int n;
printf(" nhap n");
scanf("%d",&n);
	NhapMang(array,n);
	InMang(array,n);
	printf (" so am nho nhat dau tien la %d", minam(array,n));
	printf (" be hon -10  %d", behontrumuoi(array,n));
	printf (" tb chan  %d", tbchan(array,n));
}

