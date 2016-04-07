#include <stdio.h>
#include <string.h>
int main(){
 int i;
 int n=100;
 int j;
 int map[100][100];
 memset(map,0,sizeof map);
 for(int i = 1; i <100; i++) {
        map[i][1] = map[1][i] = map[0][i] = 1;
    }
 for(i=2;i<n;i++)
 {
      for(j=2;j<n;j++)
      {
          if(i>j)
            map[i][j]=map[i][j-1]+map[i-j][i];
           else
            map[i][j]=map[i][j-1];
      }
 }
 for(i=0;i<10;i++)
 {
     for(j=0;j<10;j++)
        printf("%d ",map[i][j]);
     printf("\n");
 }

 int t;
scanf("%d",&t);
while(t--)
{
    int num;
    scanf("%d",&num);
    printf("%d\n",map[num+1][num+1]);
}

return 0;
 }

