#include<stdio.h>
#include<conio.h>
void setdata(int a[],int n)
{
	int i;
	printf("n Enter the data:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void quick_sort(int a[],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		i=first;
		j=last;
		pivot=first;
		
		while(i<j)
		{
			while(a[i]<=a[pivot])
			{
				i++;
			}
			while(a[j]>a[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quick_sort(a,first,j-1);
		quick_sort(a,j+1,last);
	}
}
void main()
{
	int a[10],n;
	clrscr();
	printf("*****quick sort*****");
	printf("\nenter the no of data");
	scanf("%d",&n);
	setdata(a,n);
	quick_sort(a,0,n-1);
	printf("\nfirst quick sort\n");
	display(a,n);
	getch();
}