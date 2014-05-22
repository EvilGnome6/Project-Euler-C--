#include <iostream>
using namespace std;

int main()
{
	int x = 1, y = 1, tx = 0, ty = 0, sum = 0;
	while (sum < 4000000)
	{
		sum += (x + y);
		tx = x + 2 * y;
		ty = 2 * x + 3 * y;
		x = tx, y = ty;
	}
	cout << sum << endl;
}
