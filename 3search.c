#include<stdio.h>
#include<time.h>

int main()
{
int i,k,a[100],n,num,l,j,temp,f,m;
clock_t t1, t2;
printf("Enter Number of terms:");
scanf("%d",&n);
printf("Enter terms:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
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
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
printf("\n");
printf("Enter element to be searched:");
scanf("%d",&num);

t1=clock();
printf("LINEAR\n");
for(i=0;i<n;i++)
{
if(a[i]==num)
break;
}
if(i<n)
printf("FOUND at %d\n",(i+1));
else
printf("NOT FOUND\n");
t2=clock();
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
m=t2-t1;
double z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("\ntime taken is %f\n",z);
printf("\n");

t1=clock();
printf("BINARY\n");
l=n-1;
f=0;
while(f<=l)
{
m=(l+f)/2;
if(a[m]==num)
break;
else if(a[m]>num)
l=m;
else if(a[m]<num)
f=m;
}


if(a[m]==num)
printf("FOUND\n");
else
printf("NOT FOUND\n");
t2=clock();
printf("\n");
for(int k=0;k<n;k++)
printf(" %d ",a[k]);
m=t2-t1;
z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("\ntime taken is %f\n",z);
printf("\n");
}

