#include <fstream>
using namespace std;
ifstream fin("input.in");
ofstream fout("input.out");
int s[100], a, b, y;
void init(int k)
{
	if (k == 1)
		s[k] = 0;
	else
		s[k] = s[k - 1] - 1;
}
int succesor(int k)
{
	if (s[k] < 9)
	{
		s[k] -= -1;
		return 1;
	}
	return 0;
}
int valid(int k)
{
	return 1;
}
int solutie(int k)
{
	return k == 6;
}
void tipar(int k)
{
	if (s[1] == s[2] || s[2] == s[3] || s[3] == s[4] || s[4] == s[5] || s[5] == s[6]) {
		int suma = 0;
		for (int i = 1; i <= k; i++)
			suma = suma * 10 + s[i];
		if (suma >= a && suma <= b)
			y++;
	}
}
void bkt(int k)
{
	init(k);
	while (succesor(k))
		if (valid(k))
			if (solutie(k))
				tipar(k);
			else
				bkt(k + 1);
}
int main()
{
	fin >> a >> b;
	bkt(1);
	fout << y;
	return 0;
}
