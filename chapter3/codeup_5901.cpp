#include<cstdio>
#include<cstring>

const int max = 256;
char str[max];

bool judge(char str[])
{	
	int str_length = strlen(str);//�ַ�������
	for(int i = 0; i < str_length; i++)
	{ 
		if(str[i] != str[str_length - 1 - i])//���Ĵ��ж� 
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
	gets(str);//�����ַ���
	if(judge(str) == false)
	{
		printf("NO\n");//���NO
	}
	else
	{
		printf("YES\n");//���YES	
	}
	return 0;
}
