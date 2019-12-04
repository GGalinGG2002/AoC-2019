#include <fstream>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int s[1000],x,y=0,a1,a2;
int main()
{
    fin>>a1>>a2;
    for(int i=a1;i<=a2;i++)
    {
        x=i;
        int r=0,ok=0,ok1=0;
        while(x)
        {
            r=r*10+x%10;
            x/=10;
        }
        int m=r;
        while(m>9&&!ok1)
        {
            if(m%10<m%100)
                ok1=1;
            m/=10;
        }
        while(r>9&&!ok)
        {
            if(r%10==r%100)
                ok=1;
            r/=10;
        }
        if(ok&&ok1)
            y++;
    }
    fout<<y;
    return 0;
}
