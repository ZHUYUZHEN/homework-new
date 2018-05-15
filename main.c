#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data,sum; //宣告變數 
	for(data=0,sum=0;data<=100;++data) //設定變數範圍，且變數每次增加1 
	sum=sum+data;  //變數sum從1加到100 
	printf("sum=%d",sum);  //印出變數的值 
	return 0;   
}
