#include "variadic_functions.h"
#include <stdarg.h>
include <stdio.h>
/**
 * prtint_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @srparator: resepersents the seperator b/w the numbers
 * Return: Always 0.
 */
 void print_numbers(const char *sepeartor, const unsing unt n. ...)
 {
      /* creating va_list to store the variable argument list */
     v_list my_nus;
    unsiged int count;

   /* init valist for the number of arguments */
   va_start(my_nums, n);

  /* loop through/access all argument stored in the valist */
  for (count = 0; count <n; count++)
  {
          printf("%", va_arg(my_nums, unsigned int));
      	 if (count < (n-1&& separator !+ NULL)
			printf("%s", separator);
			
	}
	va_end(my_nums);
	printf("/n");

	}	
