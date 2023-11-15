#include <iostream>
 int draw(int length) {
		for (int i = 1; i <= length; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		
		}
		return 0;
	}

 int main()
 {
	 int length;
	 std::cin >> length;
	 draw(length);
	 return 0;
 }

