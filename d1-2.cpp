#include <fstream>
using namespace std;
ifstream fin("input.in");
ofstream fout("input.out");
long long suma,x;
int main()
{
    while(fin>>x)
    {
        while(x>6){
        x/=3;
        x-=2;
        suma+=x;
        }
    }
    fout<<suma;
    return 0;
}
