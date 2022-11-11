#include <unistd.h>
int main(int ac, char **av)
{
  int i;
  int cont;
  
  i = 0;
  cont = 1;
  
  if (ac == 2)
  {
    while(av[1][i] != '\0')
    {
      if(av[1][i] >= 'A' && av[1][i] <= 'Z')
        cont = av[1][i] - 'A' + 1;
      if(av[1][i] >= 'a' && av[1][i] <= 'z')
        cont = av[1][i] - 'a' +1;
      while(cont)
      {
        write(1,&av[1][i], 1);
        cont--;
      }
     cont = 1;
	  i++;
    }
  }
}
