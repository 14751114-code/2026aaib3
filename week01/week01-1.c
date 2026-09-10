//week01-1.cpp SOIT106_ADVANCE
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int b=N,ans=0;
	while(N>0) {//­é¥Öªk
		ans=ans*10+N%10;
		N=N/10;

	}
	printf("%d+%d=%d\n",b,ans,b+ans);

}
