#include <iostream>
#include<bits/stdc++.h>
using namespace std;

double first(double n,double p)
{
	 	double counter1 = 1,counter2 = 1;
        for (int i = n; i > max(n-p,p); --i) counter1 *= i;
        for (int i = 2; i <= min(p,n-p); ++i) counter2 *= i;
        return counter1/counter2;

}
int main()
{
	int  n, p;

	while (cin>>n>>p && n)
	{



   printf("%d things taken %d at a time is %0.f exactly.\n", n, p, first(n,p)) ;
	}
	return 0;
}
