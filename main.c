#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int data,sum; //�ŧi�ܼ� 
	for(data=0,sum=0;data<=100;++data) //�]�w�ܼƽd��A�B�ܼƨC���W�[1 
	sum=sum+data;  //�ܼ�sum�q1�[��100 
	printf("sum=%d",sum);  //�L�X�ܼƪ��� 
	return 0;   
}
