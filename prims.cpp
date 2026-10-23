#include <iostream>
using namespace std;
const int N=4;
int main(){
    int g[N][N]={ {0,10,6,0},
                  {10,0,0,15},
                  {6,0,0,4},
                  {0,15,4,0} };
    int vis[N]={1,0,0,0};
    int edges=0,cost=0;
    cout<<"Edges in Minimum Spanning Tree:\n";
    while(edges<N-1){
        int min=999,u=-1,v=-1;
        for(int i=0;i<N;i++){
            if(vis[i]){
                for(int j=0;j<N;j++){
                    if(!vis[j]&&g[i][j]!=0&&g[i][j]<min){
                        min=g[i][j];u=i;v=j;
                    }
                }
            }
        }
        if(u==-1)break;
        cout<<u+1<<" - "<<v+1<<" : "<<min<<endl;
        vis[v]=1;
        cost+=min;
        edges++;
    }
    cout<<"Minimum cost: "<<cost<<endl;
    return 0;
}
