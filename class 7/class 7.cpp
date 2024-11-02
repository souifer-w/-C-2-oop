
#include <iostream>
using namespace std;
class part
{
private:
	int x;
	int y;
	static int c;
public :
	part() : x(8),y(7)
	{
		c++;
	}
	part(int v1, int v2 ) : x(v1), y(v2) 
	{

		c++;
	}

	void add()
	{

		cout << x << endl;
		cout 	<< y << endl;
		

	}



};

int part::c = 0;
int main()
{
	part p ,c;
	p.add();
	c.add();
	return 0;
}

