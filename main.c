#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d,s;
	for(d=0,s=0;d<=100;++d)
	s=s+d;
	printf("s=%d",s);
	return 0;
}
