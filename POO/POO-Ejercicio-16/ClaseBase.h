#include <iostream>
using namespace std;

class ClaseBase
{
	protected:
		int x;
		
	public:
		ClaseBase(int x)
		{
			this->x = x;
		}
		
		~ClaseBase()
		{
			
		}
		
		int getX()
		{
			return x;
		}
		
};
