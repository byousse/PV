// #include "ft_printf.h"

// int ft_printf(const char *string, ...)
// {
// 	va_list str;
// 	va_start(str, string);
	
// 	int i = 1;
	
// 	while (*string != '\0')
// 	{
// 		if (*string == '%' && *(string + 1) == 'd')
// 		{
// 			int x = va_arg(str, int);
// 			ft_putnbr(x);
// 			string++;
// 		}
// 		if (*string == '%' && *(string + 1) == 'c')
// 		{
// 			int x = va_arg(str, int);
// 			ft_putchar(x);
// 			string++;
// 		}
// 		if (*string == '%' && *(string + 1) == 's')
// 		{
// 			char *s; 
// 			s = va_arg(str, char *);
// 			ft_putstr(s);
// 			string++;
// 		}
// 		if (*string == '%' && *(string + 1) == 'X')
// 		{
// 			unsigned int s = va_arg(str, unsigned int);
// 			ft_XER(s);
// 			string++;
// 		}
// 		if (*string == '%' && *(string + 1) == 'x')
// 		{
// 			unsigned int s = va_arg(str, unsigned int);
// 			ft_xER(s);
// 			string++;
// 		}
// 		if (*string == '%' && *(string + 1) == '%')
// 		{
// 			ft_putchar(*string);
// 			string++;
// 		}
// 		else if(*(string - 1) != '%')
// 			ft_putchar(*string);
// 		string++;
// 		i++;
// 	}
// 	return(i);
// 	va_end(str);
// }
// int	main()
// {
	
// 	char j[] = "salam";
	
// 	// ft_printf("%X --- %x\n", 2147483647, 2147483647);
// 	ft_printf("--__%%--__%d--__%c--__", 15, 'A');
// }