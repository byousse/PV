
#include "ft_printf.h"

int	ft_XER(unsigned int X)
{
	unsigned int 	temp;
	unsigned int 	i;
	unsigned int 	j;

	
	temp = X;
	while(temp != '\0')
	{
		temp = temp/16;
		i++;
	}
	char *ptr;
	ptr = malloc((i + 1)* sizeof(char));
	if(!ptr)
		return(0);
	j = 0;	
	int	x = 0;
	while((i - j) > 0)
	{
		if ((X % 16) >= 0 && (X % 16) <= 9)
		ptr[i - j - 1] = (X % 16) + '0';
		if ((X % 16) >= 10 && (X % 16) <= 15)
		ptr[i - j - 1] = (X % 16) + 55;
		X = X / 16;
		j++;
		x++;
	}
	ptr[i] = '\0';
	ft_putstr(ptr);
	return(x);
}
int	main()
{
	int i = 45;
	ft_XER(i);
	
}