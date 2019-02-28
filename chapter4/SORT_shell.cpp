/*
***先将要排序的一组数按某个增量d（n/2,n为要排序数的个数）分成若干组，
每组中记录的下标相差d.对每组中全部元素进行直接插入排序，
然后再用一个较小的增量（d/2）对它进行分组，在每组中再进行直接插入排序。
当增量减到1时，进行直接插入排序后，排序完成。***
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

