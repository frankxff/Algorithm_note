#include<cstdio>
#include<cstring>

int main()
{
	char str[90];
	gets(str);
	int len = strlen(str), r = 0, h = 0;//r为行，h为列
	char ans[90][90];//ans[0]~ans[r]存放单词
	for(int i = 0; i < len; i++)
	{
		if(str[i] != ' ')//如果不是空格，则存放至ans[r][h],并令h++ 
		{
			ans[r][h++] = str[i];
		}
		else
		{
			ans[r][h] = '\0';//末尾是结束符\0
			r++;
			h = 0; 
		}
	} 
	for(int i = r; i >= 0; i--)//倒着输出即可 
	{
		printf("%s", ans[i]);
		if(i > 0) printf(" "); 
	}
	return 0;
}
