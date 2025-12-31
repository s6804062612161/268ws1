#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int a,b,c,d;
	for (i=1;i<4;i++){
		if (i==1){
			a=1,b=1,c=5,d=1;printf("4.1\n");
		} else if (i==2){
			a=9,b=2,c=0,d=1;printf("4.2\n");
		} else if (i==3){
			a=0,b=3,c=3,d=3;printf("4.3\n");
		}
		
		float WS2A;
		WS2A = (5.0*3.0+a)/5.0+1.0/b;
		printf("WS2A = %f\n",WS2A);
		
		float WS2E;
		WS2E = cbrt(pow(b,2.0) - 4.0*d);
		printf("WS2E = %f\n",WS2E);
	}		
		
	return 0;
}
