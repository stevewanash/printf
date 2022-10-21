#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - prints out anything
 * @format: a pointer to an array of characters
 * 
 * Return: The number of bytes printed
 */
int _printf(const char *format, ...)
{
    int i = 0;

    char *j;

    j = malloc(100);

    /*char k = 0;

    char *l;

    l = malloc(100);


    va_list ap;

    va_start(ap, format);
    
    while (k < format)
    {
        l = va_arg(ap, int);*/

    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == ' ')
            {
                j[i] = format[i];

                i++;                
                /*if (format [i + 1] == 'c')
                {
                    
                }
                else if (format [i + 1] == 's')
                {
                    
                }
                if (format [i + 1] == 'd')
                {
                    
                }
                if (format [i + 1] == 'f')
                {
                    
                }
                if (format [i + 1] == 'd')
                {
                    
                }*/
            }
            else if (!(format [i + 1]))
            {
                return (-1);
            }
            /*else
            {
                write (1, '%', 1);
            }*/
        }
        /*else if (format [i] == '\\')
        {
            if (format [i + 1] != ' ' && format [i + 1] != '\0' )
            {
                if (format [i + 1] == 'n')
                {

                }
                else if (format [i + 1] == 't')
                {
                    
                }
                /*else
                {
                
                }
            }
        }*/
        else
        {
            j[i] = format[i];

            i++;
        }
    }

    write(1, j, i);

    free(j);

    return (i);
}
