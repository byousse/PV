#include <unistd.h>

void put_char(char c)
{
	if (c > 9)
		put_char(c / 10);
	write (1, &"0123456789"[c % 10] , 1);
}
int main(void)
{
	int i = 1;
	while (i <= 100)
	{
	if (i % 3 == 0)
	   write(1, "fizz", 4);
	else if (i % 5 == 0)
		write (1, "buzz", 4);
	else if (i % 3 == 0 && i % 5 == 0)
		write (1, "fizzbuzz", 8);
	else 
	{
		put_char(i);

	}
	write (1, "\n", 1);
	i++;

	}
}
