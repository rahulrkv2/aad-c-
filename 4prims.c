#include<stdio.h>

int main()
{
int t[100][100],min,cost=0,n,i,j,k=0,l=0,x,y,z=1,r,s=0,p,q,temp;
/**
printf("Enter Number of vertices:");
scanf("%d",&n);

printf("if no edge exists enter '99'\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("Enter cost of edge b/w %d & %d\n",i,j);
scanf("%d",&m[i][j]);
}
}*/
n=7;
int a[7],b[7];
int m[7][7]={{99,2,2,1,99,99,99},{2,99,99,1,10,99,99},{2,99,99,2,99,6,99},{1,1,2,99,7,8,4},{99,10,99,7,99,99,6},{99,99,6,8,99,99,1},{99,99,99,4,6,1,99}};
i=0;
while(z<=n)
{
a[z-1]=i;
min=99;
for(i=0;i<z;i++)
{
for(j=1;j<n;j++)
{

for(r=0;r<=s;r++)
{
while((j==b[r])) 
{
j++;
}
}
if(j>=n)
{
break;
}
if(m[a[i]][j]<=min)
{
min=m[a[i]][j];
x=a[i];
y=j;
}
printf("i=%d j=%d x=%d min=%d\n",a[i],j,m[a[i]][j],min);
}
}
t[k][l]=x;
t[k][l+1]=y;
printf("%d  ",t[k][l]);
printf("%d\n",t[k][l+1]);
cost=cost+m[x][y];
printf("%d\n",cost);
if(r==n)
{break;
}
if(s==0)
{
b[s]=x;
s++;
}
b[s]=y;
s++;
z++;
i=y;
for(p=0;p<r;p++)
{
for(q=0;q<r-p-1;q++)
{
if(b[q]>b[q+1])
{
temp=b[q];
b[q]=b[q+1];
b[q+1]=temp;
}
}
}

for(p=0;p<r;p++)
{
printf("%d  ",b[p]);
}
printf("\n");
}
}
