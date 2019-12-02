#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
 void quicksort(int a[],int low,int high)
    {
    	int middle ;
    	if(low>=high) return;
    	middle=split(a,low ,high);
        quicksort(a,low,middle-1);
		quicksort(a,middle+1,high);
		 	
	
	}
	int split (int a[],int low,int high)
	{
		int part_element=a[low];
		for(;;)
		{
			while (low<high&&part_element<=a[high])
			  high--;
			if(low>=high) break;
			a[low++]=a[high];
			
			while (low<high&&a[low]<=part_element)
			 low++;
			if (low>=high) break;
			a[high--]=a[low];
			   
			
		}
		a[high]=part_element;
		return high;
	}

int main(int argc, char *argv[]) {
	int i,n,j=1,a[10000],b[10000],c=0,d=0,e[100000],l,m,o=0,p=0;
	char ch;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			scanf(" %d",&e[0]);//%d前有一个空格？？？？？？？？？？？ 
			if(e[0]%2!=0){
						a[o++]=e[0];
						
					}
					else if(e[0]%2==0)
					{
						b[p++]=e[0];
						
					}
			
			while((ch=getchar())!='\n')
			{
				scanf("%d",&e[j]);
					if(e[j]%2!=0){
						a[o++]=e[j];
						
					}
					else if(e[j]%2==0)
					{
						b[p++]=e[j];
						
					}
					j++;
				}
				
			
			quicksort(a,0,o-1);
			quicksort(b,0,p-1);
			
			for(l=0;l<o;l++)
			{
				if(a[l]!=0)
					printf("%d ",a[l]);
			}
			for(m=0;m<p;m++)
			{
				if(b[m]!=0)
					printf("%d ",b[m]);
			}
			
			printf("\n");
			for(m=0;m<10000;m++)
			{
				a[m]=0;
				b[m]=0;		
			} 
	
}
	return 0;
}

