#include <fstream>
using namespace std;
ifstream fin("input.in");
ofstream fout("output.out");
int x[10000],i,j;
char c;
int main()
{
    while(fin>>x[i++]>>c);
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
            j=j+500000;
        }
    }
    for(j=0;j<i;j++)
      fout<<x[j]<<endl;
    return 0;
}
