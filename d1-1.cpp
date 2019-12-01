#include <fstream>
using namespace std;
ifstream fin("input.in");
ofstream fout("input.out");
long long suma,x;
int main()
{
    while(fin>>x)
    {
        x/=3;
        suma+=x-2;
    }
    fout<<suma;
    return 0;
}
