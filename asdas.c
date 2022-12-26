#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int main()
{
	printf("%d",((255 >> 6)));
}

//	1	 1	 1	 1	 1	 1	 1	 1
//	128	 64	 32	 16	 8	 4	 2	 1
//	0	0	0	0	0	0	1	1
//	0	0	0	0	0	0	0	1
//	0	0	0	0	0	0	0	1
