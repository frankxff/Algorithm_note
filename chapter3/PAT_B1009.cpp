#include<cstdio>
#include<cstring>

int main()
{
	char str[90];
	gets(str);
	int len = strlen(str), r = 0, h = 0;//rΪ�У�hΪ��
	char ans[90][90];//ans[0]~ans[r]��ŵ���
	for(int i = 0; i < len; i++)
	{
		if(str[i] != ' ')//������ǿո�������ans[r][h],����h++ 
		{
			ans[r][h++] = str[i];
		}
		else
		{
			ans[r][h] = '\0';//ĩβ�ǽ�����\0
			r++;
			h = 0; 
		}
	} 
	for(int i = r; i >= 0; i--)//����������� 
	{
		printf("%s", ans[i]);
		if(i > 0) printf(" "); 
	}
	return 0;
}
