#include <stdio.h>
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;

void bfs(int v)
{
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;
    if (f <= r)
    {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}

signed main()
{
    int v;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }

    printf("\n Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Enter the starting vertex:");
    scanf("%d", &v);
    bfs(v);
    printf("\n The node which are reachable are:\n");

    for (i = 1; i <= n; i++)
    {
        if (visited[i])
            printf("%d\t", i);
        else
        {
            printf("\n Bfs is not possible. Not all nodes are reachable");
            break;
        }
    }
}
/*              a
        /       |       \
        b       c        c
       / |             /  |  \
       d  e             e   f   g
       |   |            |
       f   g            h
       output first:
 Enter the number of vertices:4

 Enter graph data in matrix form:
1 1 1 1 
0 1 0 0
0 0 1 0
0 0 0 1

 Enter the starting vertex:2

 The node which are reachable are:
 second output
  Enter graph data in matrix form:
1 1 1 1
0 1 0 0
0 0 1 0
0 0 0 1

 Enter the starting vertex:1

 The node which are reachable are:
1       2       3       4
*/