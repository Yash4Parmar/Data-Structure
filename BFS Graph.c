//YASH PARMAR
// BFS
#include<conio.h>
#include<stdio.h>

int cost[10][10],i,j,k,n,qu[10],front,rear,v,visit[10],visited[10];

int main()
{
int m;
printf("enter no of vertex: ");
scanf("%d",&n);

printf("\n Enter adj matrix for your graph");
    		for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&cost[i][j]);
                }
            }

printf("enter initial vertex");
scanf("%d",&v);

printf("Visited vertex\n");
//printf("%3d",v);

visited[v]=1;
k=1;
    while(k<n)
    {
        for(j=0;j<n;j++)
        {
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rear++]=j;
            }

        }

        v =qu[front++];
        printf("%3d",v);
        k++;
        visited[v]=1;
    }

return 0;
}

