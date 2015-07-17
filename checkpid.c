#include<unistd.h>
#include<sys/types.h>
int main()
{
	printf("euid is %d \n",geteuid());
	if(geteuid()==0)
	{
		printf("Congratulation you're passed\n");
	}
}
