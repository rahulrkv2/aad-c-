#include<stdio.h>

int main()
{
int a[4][4]={{0,5,-1,4},{-1,0,6,-1},{2,-1,0,-1},{-1,3,1,0}};
int i,j,l,n=4,b[4][4],k;

for(l=0;l<n;l++)
{
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<n;j++)
{
printf("%d  ",a[i][j]);
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((a[i][l]>0) && (a[l][j]>0))
{
k=a[i][l]+a[l][j];
if(a[i][j]==-1)
{
a[i][j]=k;
}
if(k<a[i][j])
{
a[i][j]=k;
}
if(i==j)
{
a[i][j]=0;
}
}
}
}
printf("\n");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%d  ",a[i][j]);
}
}
}
/*
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((a[i][1]>0) && (a[1][j]>0))
{
k=a[i][1]+a[1][j];
if(a[i][j]==-1)
{
a[i][j]=k;
}
if(k<a[i][j])
{
a[i][j]=k;
}
if(i==j)
{
a[i][j]=0;
}
}
}
}
printf("\n");
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<n;j++)
{
printf("%d  ",a[i][j]);
}
}



for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((a[i][2]>0) && (a[2][j]>0))
{
k=a[i][2]+a[2][j];
if(a[i][j]==-1)
{
a[i][j]=k;
}
if(k<a[i][j])
{
a[i][j]=k;
}
if(i==j)
{
a[i][j]=0;
}
}
}
}
printf("\n");
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<n;j++)
{
printf("%d  ",a[i][j]);
}
}


for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((a[i][3]>0) && (a[3][j]>0))
{
k=a[i][3]+a[3][j];
if(a[i][j]==-1)
{
a[i][j]=k;
}
if(k<a[i][j])
{
a[i][j]=k;
}
if(i==j)
{
a[i][j]=0;
}
}
}
}
printf("\n");
for(i=0;i<n;i++)
{printf("\n");
for(j=0;j<n;j++)
{
printf("%d  ",a[i][j]);
}
}*/
}
