#include<stdio.h>
int n=9,i,j,k=0,c,b[9];
int a[9][9];

void dfs(int );
int main()
{


for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
 	}

for(i=0;i<n;i++)
{
b[i]=0;
}


for(i=0;i<n;i++)
{
if(b[i]==0)
{
dfs(i);
k++;
}
}
printf("\n%d",k);
}
void dfs(int i)
{
int j;
b[i]=1;
for(j=0;j<n;j++)
{ 
if((b[j]==0) && a[i][j]==1)
dfs(j);
}
}









