#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


/*int	main() 
{    
	char letter;
	letter ='s';
	ft_putchar(letter);
	return 0;
}*/


//ota posibilidad:
int	main() 
{    
	ft_putchar('f');
	return 0;
}
