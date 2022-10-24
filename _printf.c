#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int i = 0;

    va_list ap;

    va_start(ap, format);

    while (format[i])
    {
        /*if (format[i] == '%' && format[i + 1] == 'd')
        {
            putchar(va_arg(ap, int) + '0');
            s[n] = va_arg(ap, int) + '0';
            del(s, n - 1);
            i+=2;
            i++;
            continue;*/
        if (format[i] == '%')
        {

            switch(format[i + 1])
            {
                case 'd':
                    putchar(va_arg(ap, int) + '0');
                    /*s[n] = va_arg(ap, int) + '0';
                    del(s, n - 1);*/
                    i+=2;
                    //i++;
                    continue;
                case 'i':
                    putchar(va_arg(ap, int) + '0');
                    i+=2;
                    continue;
                case 'c':
                    putchar(va_arg(ap, int));
                    i+= 2;
                    continue;
                /*case 's':
                    putchar(va_arg(ap, int));
                    i+=2;
                    continue;
                    /*buffer = va_arg(ap, int);

                    while (s[n])
                    {
                        putchar(s[n]);
                        n++;
                    }*/                 
                default:
                    break; 
            }
        }
        //}
        else
            putchar(format[i]);
            /*s[n] = format[i];

        n++;*/
        i++;
    }
    //printf("%d\n", i);
    //write(1, s, i);

    va_end(ap);

    return (i);
}