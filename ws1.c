#include <stdio.h>

int main(){
	int n1,n2,n3,n4,comp;
	scanf("%d %d %d %d", &n1,&n2,&n3,&n4);
	int mak = (n1>n2 && n1>n3 && n1>n4)?n1:(n2>n1 && n2>n3 && n2>n4)?n2:(n3>n1 && n3>n2 && n3>n4)?n3:(n4>n1 && n4>n2 && n4>n3)?n4:0;
	(n1<mak && n1>comp)?comp=n1:0;
	(n2<mak && n2>comp)?comp=n2:0;
	(n3<mak && n3>comp)?comp=n3:0;
	(n4<mak && n4>comp)?comp=n4:0;
	printf("%d",comp);
	return 0;
}
