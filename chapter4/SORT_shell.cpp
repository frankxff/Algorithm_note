/*
***�Ƚ�Ҫ�����һ������ĳ������d��n/2,nΪҪ�������ĸ������ֳ������飬
ÿ���м�¼���±����d.��ÿ����ȫ��Ԫ�ؽ���ֱ�Ӳ�������
Ȼ������һ����С��������d/2���������з��飬��ÿ�����ٽ���ֱ�Ӳ�������
����������1ʱ������ֱ�Ӳ��������������ɡ�***
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a[] = {1,54,6,3,78,34,12,45,56,100};
    int n= 10,d1=10;
    int temp,i,j,x,d;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    while(true)
    {
        d1 = ceil(d1/2);
        d = (int)d1;
        for(x=0;x<d;x++)
        {
            for(i=x+d;i<n;i=i+d)
            {
                temp = a[i];
                for(j=i-d;j>=x && temp<a[j];j=j-d)
                {
                    a[j+d] = a[j];
                }
                a[j+d] = temp;
            }
        }
        if(d == 1)
            break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}

