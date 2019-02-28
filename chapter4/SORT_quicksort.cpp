#include<stdio.h>
#include<windows.h>
int main()
{
    int a[] = {49,38,65,97,76,13,27,49,78,34,12,64,5,4,62,99,98,54,56,17,18,23,34,15,35,25,53,51};
    int n= 28;
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    void quick_sort(int *nums,int low,int high);
    quick_sort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
int getPosition(int *nums,int low,int high)
{
    int k,pos;
    k = nums[low];
    while(low<high)
    {
        while(low<high && nums[high]>=k)
            high--;
        if(low<high)
            nums[low++] = nums[high];
        while(low<high && nums[low]<=k)
            low++;
        if(low<high)
            nums[high--] = nums[low];
    }
    nums[low] = k;
    pos = low;
    return pos;
}
void quick_sort(int *nums,int low,int high)
{
    int pos;
    if(low<high)
    {
        pos = getPosition(nums,low,high);
        quick_sort(nums,low,pos-1);
        quick_sort(nums,pos+1,high);
    }
} 
