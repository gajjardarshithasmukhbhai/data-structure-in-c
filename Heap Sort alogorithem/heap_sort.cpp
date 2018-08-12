#include<stdio.h>
#include<conio.h>
void heapify(int a[],int i,int n);
void getdata(int a[],int n)
{
	int i;
	printf("\n Enter the data::\n");
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
		printf("%d\n\n",a[i]);
	}
}
void heap_sort(int a[],int n)
{
	int i,temp;
	for(i=n/2-1;i>=0;i--)
	{
		heapify(a,i,n);
	}
	for(i=n;i>=0;i--)
	{
		temp=a[i];
		a[i]=a[0];
		a[0]=temp;
		heapify(a,0,i);
	}
}
void heapify(int a[],int i,int n)
{
	int l,r,max,temp;
	l=2*i+1;
	r=2*i+2;
	max=i;
	if(l<n && a[l]>a[max])
	{
		max=l;
	}
	if(r<n && a[r]>a[max])
	{
		max=r;
	}
	if(max!=i)
	{
		temp=a[i];
		a[i]=a[max];
		a[max]=temp;
		heapify(a,max,n);
	}
}
void main()
{
	int a[10],n;
	clrscr();
	printf("Enter the no of data");
	scanf("%d",&n);
	getdata(a,n);
	heap_sort(a,n-1);
	printf("\n....after heap sort....");
	display(a,n);
	getch();
}