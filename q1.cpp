#include<iostream>
using namespace std;

int main()
{
int a = 0, m = 0, b;


while(a<=100)
{
m = 0;
	while(m<=34)
	{
	b = 100 - (a + m);	
		if(a*1+m*3+b*0.5==100)
		{	cout << a << " " << m << " " << b << endl;	}

	m++;
	}

a++;
}


return 0;
}
