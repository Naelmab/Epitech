/*
** EPITECH PROJECT, 2020
** my_print_comb2.C
** File description:
** number
*/
void my_putchar(char c)
{
    write(1, &c, 1);
}

void order(int a, int b, int c, int d)
{
    
    if (a == 9 && b == 8 && c == 9 && d == 9) {
        my_putchar(a + '0');
        my_putchar(b + '0');
        my_putchar(' ');
        my_putchar(c + '0');
        my_putchar(d + '0');
    } else {
        my_putchar(a + '0');
        my_putchar(b + '0');
        my_putchar(' ');
        my_putchar(c + '0');
        my_putchar(d + '0');
        my_putchar(',');
        my_putchar(' ');
    }
}

int main(void)
{
    int a;
    int b;
    int c;
    int d;

    a = 0;
    b = 0;
    c = 0;
    d = 1;
    while (a + b + c + d <= 35)
    {
        order(a, b, c, d);
        d++;
        if(d > 9) {
            c++;
            d = 0;	
        }
        if(c > 9){
			c = a;   
			b++;
            d = b + 1;
        }
        if(b == 10){
            a++;
            b = 0;
            if(c == 0){
                b = 0;
                c = a;
                if(b == 0){
                    d = b + 1;
                    c = a;
               }
            }
        }
	}
}
