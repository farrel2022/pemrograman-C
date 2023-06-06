#include <iostream>

void counter()
{
	static int count;
    std::cout << count++ << std::endl;
}

int main()
{
	for(int i=0;i<3;i++)
	{
		counter();
	}
}
