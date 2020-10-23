/*** EPITECH PROJECT, 2020
** task05d03
** File description:
** nombre -< ordre
*/

void my_putchar (char c)
{
    write(1, &c, 1);    
}

void my_printer_comb(int a, int b, int c)
{
    if (a == 55 && b == 56 && c == 57) {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
    } else {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    char a;
    char b;
    char c;

    a = 48;
    while (a < 56) {
        b = a + 1;
        while (b < 57) {
            c = b + 1;
            while (c < 58) {
                my_printer_comb(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
    my_putchar('\n');
}

int main (void)
{
    my_print_comb();
    return(0);
}
