
#include "push_swap.h"

int     *find_ch(node_t **top)
{
	int b = ft_min(top);
   int a = ft_max(top);
   int j;
   int i;
   int new;
   int *chunk;
   j = 0;
   i = 1;
   new = 0;
   chunk = (int *)malloc(sizeof(int) * 14);
   if ((a - b) % 2 != 0)
       new += 1;
   new += (a - b) / 5;
   chunk[0] = b;
   while (i < 13)
   {
       chunk[i] = chunk[i - 1] + new + 1;
	   i++;
   }
   chunk[i] = '\0';
   return (chunk);
}
