#include<stdio.h>
#include<conio.h>
int main(){
int m,c;
	int T=0,S=0;
	printf("nhap chu so dien cu=");
	scanf("%d",&c);
	printf("nhap chu so dien moi=");
	scanf("%d",&m);
	S=m-c;
	printf("\nchu so dien dung trong thang la:=%d",S);
	if(S<=50){
		T=S*1500;
	}
	else if((S>50)&&(S<=100)){
		T=S*2000;
	}
	else if(S>100){
		T=S*3000;
	}
	printf("\nso tien dien phai tra la:%d",T);
	return 0;
}
