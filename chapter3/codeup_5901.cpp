#include<cstdio>
#include<cstring>

const int max = 256;
char str[max];

bool judge(char str[])
{	
	int str_length = strlen(str);//×Ö·û´®³¤¶È
	for(int i = 0; i < str_length; i++)
	{ 
		if(str[i] != str[str_length - 1 - i])//»ØÎÄ´®ÅÐ¶Ï 
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	gets(str);//ÊäÈë×Ö·û´®
	if(judge(str) == false)
	{
		printf("NO\n");//Êä³öNO
	}
	else
	{
		printf("YES\n");//Êä³öYES	
	}
	return 0;
}
