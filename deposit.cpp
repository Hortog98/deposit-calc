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
int sverhdeposit (int x,int n) {
int y;
if (n>=0&&n<=30) y=x-(x/10);
	if (n>=31&&n<=120) y=x+(x/100*3);
	if (n>=121&&n<=240) y=x+(x/100*8);
	if (n>=241&&n<=365) y=x+(x/100*15);
	return y;
}
int main () {
int f,x,n;
printf("Vvedite summu vclada i srok: ");
scanf("%d%d",&x,&n);
if (x<1000||n>365) {if (x<1000) printf("\nMinimal'naya summa vclada dolzhna bit' 1000 rubley");
if (n>365) printf("\nMaximal'niy sroc vclada 365 dney");}
else{
f=deposit(x,n);
printf("Summa vclada sostavila %d",f);}
system("pause");
}
