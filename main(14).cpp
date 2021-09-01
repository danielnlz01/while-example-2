#include <iostream>

using namespace std;

int res, x, cont, y;

int main() 
{
	cont = 0;
	y = 0;
	res = 0;
	cout << "give me a number" << endl;
  cin >> x;
  x = y;
  
  while (cont < 10)
  {
  	res += x;
  	x += 1;
  	cont += 1;
  	cout << x << endl << y << endl;
  }
  
  cout << "the addition of the 10 consecutive numbers starting from " << y << " is: " << res << endl;
  return 0;
}