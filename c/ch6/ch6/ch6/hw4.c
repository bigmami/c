#include <stdlib.h>
#include <stdio.h>

int Fib(int);

void hw4()
{
	int n;
	printf("�п�J�ƦC\n"); //�O���ƦC�D���j��
	scanf("%d",&n);
	for(int i=0; i<=n; i++)
    printf("%d  ", Fib(i));
	
 } 
 
 
 int Fib(int n)
 {
 	int i,pre=0,total,next=1;
 	for(i=1;i<n;i++){
 		total=pre+next;
 		pre=next;
 		next=total;
	 }
	 return next;
 }