#include<signal.h>
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>


void my_isr(int n)
{
	printf("signal masked s=%d\n",n);
}

void main()
{
	int i;
	printf("my pid=%d\n",getpid());


	for(i=1;i<65;i++)
	signal(i,my_isr);

//	signal(9,SIG_IGN);	// we can't handle sig 9 and 19


	while(1);
}
