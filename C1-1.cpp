#include<iostream>
using namespace std;
int main()
{
	int i;
	double n,f[100],sum = 0;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> f[i];
		sum += f[i];
	}
	double tb = sum/n, ps = 0;
	for(i = 1;i <= n;i++)
	ps += (f[i]-tb)*(f[i]-tb)/(n-1);
	cout << "Trung binh: " << tb << endl;
	cout << "Phuong sai: " << ps;
	return 0;
}
