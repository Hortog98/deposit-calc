#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int deposit (int x,int n) {
int y;
if (n>=0&&n<=30) y=x-(x/10);
	if (n>=31&&n<=120) y=x+(x/100*2);
	if (n>=121&&n<=240) y=x+(x/100*6);
	if (n>=241&&n<=365) y=x+(x/100*12);
	return y;
}
int main () {
int f,x,n;
printf("Vvedite summu vclada i srok: ");
scanf("%d%d",&x,&n);
}
