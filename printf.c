int _printf(const char *format, ...)
{
    int i = 0;
    va_list list;

    va_start(list, format);
        if (!format || (format[0] == '%' && !format[1]))
        {
            return (-1);
        }
        if (format[0] == '%' && format[1] == ' ' && !(format[2]))
        {
            return (-1);
        }
        if (format[2] == 'c')
        {
            _putchar(va_arg(list, char));
        }        
        if (format[2] == 's')
        {
            _puts(va_arg(list, char[]));
        }
    va_arg(list, char)

    va_end(list);
}
