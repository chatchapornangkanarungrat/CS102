#include <stdio.h>

int main()
{
	int n,s[100],i;
	int hr[100],mi[100],se[100];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &s[i]);
		hr[i]=s[i]/3600;
		mi[i]=(s[i]%3600)/60;
		se[i]=(s[i]%3600)%60;
	}
	for(i=0;i<n;i++)
	printf("%d %d %d\n",hr[i],mi[i],se[i]);
	
	return 0;
}


