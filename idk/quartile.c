
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
   chunk = (int *)malloc(sizeof(int) * 5);
   if ((a - b) % 2 != 0)
       new += 1;
   new += (a - b) / 5;
   chunk[0] = new + b - 1;
   while (i < 4 && j < 5)
       chunk[i++] = chunk[j++] + new;
   chunk[i] = ft_max(top);
   return (chunk);
}
