#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
int c,n,o,i,j,ch,temp,num,m,a[100000];
clock_t t1, t2;

printf("Enter Number of terms:");
scanf("%d",&n);

printf("1.ASCENDING   2.DESCENDING  3.RANDOM");
scanf("%d",&o);
if(o==1)
{
for(i=0;i<n;i++)
{a[i]=i;
}
sort();
printf("%d  %d  %d",a[0],a[n/2],a[n-1]);
}
if(o==2)
{
j=0;
for(i=n;i>=0;i--)
{a[j]=i;
j++;
}
sort();
printf("%d  %d  %d",a[0],a[n/2],a[n-1]);
}

if(o==3)
{
for(i=0;i<n;i++)
{n = rand() % n;
a[i]=n;
}
sort();
printf("%d  %d  %d",a[0],a[n/2],a[n-1]);
}

}
int sort()
{int c,n,o,i,j,ch,temp,num,m,a[100000];
clock_t t1, t2;
t1=clock();
printf("\nBUBBLE\n");
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
t2=clock();
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
m=t2-t1;
double z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("\ntime taken is %f\n",z);
printf("\n");


t1=clock();
printf("\nSELECTION\n");
int min;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[min]>a[j])
min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
t2=clock();
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
m=t2-t1;
z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("\ntime taken is %f\n",z);
printf("\n");

t1=clock();
printf("\nINSERTION\n");
for(i=0;i<n;i++)
{
temp=a[i];
for(j=i-1;(j>=0&&temp<a[j]);j--)
a[j+1]=a[j];
a[j+1]=temp;
}
t2=clock();
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
m=t2-t1;
z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("\ntime taken is %f\n",z);
printf("\n");


t1=clock();
printf("\nQUICK SORT\n");
void quicksort(int a[100],int first,int last)
{
int i,j,pivot,temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j)
{
while(a[i]<=a[pivot]&&i<last)
i++;
while(a[j]>a[pivot])
j--;
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
quicksort(a,first,j-1);
quicksort(a,j+1,last);
}
}
quicksort(a,0,n-1);
t2=clock();
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
m=t2-t1;
z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("\ntime taken is %f\n",z);
printf("\n");
}

