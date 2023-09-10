#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - A variadic function that prints diverse datatypes
 * @format: stores the type of data that is about to be printed  
 * Return: Void
 */
void print_all(const char * const format, ...)
{  
int printed = 0;
const char *p = format;
va_list datatype;
va_start(datatype, format);

    while (*p)
    {
        const char actual_p = *p;

        switch (actual_p)
        {
            case 'c':
                printf("%c", va_arg(datatype, int));
                printed = 1;
                break;
            case 'i':
                printf("%d", va_arg(datatype, int));
                printed = 1;
                break;
            case 'f':
                printf("%f", va_arg(datatype, double));
                printed = 1;
                break;
            case 's':
            {
                char *str = va_arg(datatype, char *);
                int isNull = (str == NULL);

                switch (isNull)
                {
                    case 1:
                        printf("(nil)");
                        break;
                    default:
                        printf("%s", str);
                        printed = 1;
                        break;
                }
                break;
            }
            default:
                break;
        }

        p++;
        if ((*p == 'c' || *p == 'i' || *p == 'f' || *p == 's') && printed)
        {
            printf(", ");
        }
    }

    va_end(datatype);
    printf("\n");
}
