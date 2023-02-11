#include<iostream>
#include"tetris"
using namespace std;
void oddIntegers()
{
	int a;
	cout << "Enter your starting Number only 1 =";
	cin >> a;
	for (int i=a; i <=10; i++)
	{
		cout << a << endl;
		a += 2;
	}
}
void evenIntegers()
{
	int a;
	cout << "Enter your starting Number only 0 =";
	cin >> a;
	int i = a;
	while (i < 10)
	{
		cout << a << endl;
		a += 2;
		i++;
	}
	
}
void divby2or3()
{
	int a;
	cout << "Enter your Number =";
	cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		if (a % 2 == 0)
		{
			if (a % 3 == 0)
			{
				cout << a << endl;
			}
			else
			{
				i--;
			}
		}
		else
		{
			i--;
		}
		a++;
	}

}
void multiple()
{
	int a;
	cout << "Enter your Number =";
	cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		if (a % 2 == 0)
		{
			if (a % 3 == 0)
			{
				cout << a << endl;
			}
			else
			{
				i--;
			}
		}
		else
		{
			i--;
		}
		a++;
	}
}
void backward()
{
	int i = 100;
	while (i >= 50)
	{
		cout << i << endl;
		i--;
	}
}
void inc5()
{
	int i = 0;
	while (i <= 100)
	{
		cout << i << endl;
		i += 5;
	}
}
void even50()
{
	for (int i = 0; i < 100; i += 2)
	{
		
		cout << i << endl;
		
	}
}
void odd50()
{
	for (int i = 1; i <= 100; i += 2)
	{

		cout << i << endl;

	}
}
void seriesOfsq()
{
	cout << "\t\tSeries of Square Numbers\n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << i * i << endl;
	}
}
void fectorial()
{
	int num, fect=1;
	cout << "Enter a Number of U want to print a Fectorial =";
	cin >> num;
	for ( num; num > 0;num --)
	{
		fect = fect * num;
	}
	cout << "fectorial is ="<< fect;
}
void percentage()
{
	int phy, chem, maths, bio, comp;
	cout << "Enter marks of phy";
	cin >> phy;
	cout << "Enter marks of chemistry";
	cin >> chem;
	cout << "Enter marks of maths";
	cin >> maths;
	cout << "Enter marks of bio";
	cin >> bio;
	cout << "Enter marks of comp";
	cin >> comp;
	int totalmarks = 500;
	int sum;
	sum = phy + chem + bio + maths + comp;
	int percentage;
	percentage = (sum / totalmarks) * 100;
	cout << percentage;

}
void main()
{
	//tetris().run();
	percentage();
}