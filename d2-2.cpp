#include <fstream>
#include <limits.h>
#include <stdlib.h>
using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");
int x[10000],x1[10000],i,m,op,j,y;
char c;
int main()
{
    while(fin>>x[i++]>>c)
    for(j=0;j<i;j++)
        x1[j]=x[j];
    for(m=0;m<=100;m++)
    for(op=0;op<=100;op++){
        j=0;
        x[1]=m;
        x[2]=op;
    while(j<i)
    {
        if(x[j]==1)
        {
            x[x[j+3]]=x[x[j+1]]+x[x[j+2]];
            j=j+4;
        }
        else
            if(x[j]==2)
        {
            x[x[j+3]]=x[x[j+1]]*x[x[j+2]];
            j=j+4;
        }
        else
            if(x[j]==99)
        {
            j=INT_MAX;
        }
    }
    if(x[0]==19690720){
        fout<<100*m+op;
        exit(0);
        }
    else
    for(y=0;y<i;y++)
        x[y]=x1[y];
    }
    return 0;
}
