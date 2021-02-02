/*
** EPITECH PROJECT, 2020
** tests criterion
** File description:
** tests criterion
*/

# include "../lib/my.h"

void redirect_all_std ()
{
    cr_redirect_stdout () ;
    cr_redirect_stderr () ;
}

Test ( my_printf , charac1 , . init = redirect_all_std )
{
    my_printf ("%c", 'n');
    cr_assert_stdout_eq_str ("n");
}

Test ( my_printf , charac2 , . init = redirect_all_std )
{
    my_printf ("%c", 'N');
    cr_assert_stdout_eq_str ("N");
}

Test ( my_printf , charac3 , . init = redirect_all_std )
{
    my_printf ("%c", '4');
    cr_assert_stdout_eq_str ("4");
}

Test ( my_printf , simple_string , . init = redirect_all_std )
{
    my_printf ("hello word");
    cr_assert_stdout_eq_str ("hello word");
}

Test ( my_printf , string , . init = redirect_all_std )
{
    my_printf ("%s", "hello word");
    cr_assert_stdout_eq_str ("hello word");
}

Test ( my_printf , nombred1 , . init = redirect_all_std )
{
    my_printf ("%d", 42);
    cr_assert_stdout_eq_str ("42");
}

Test ( my_printf , nombred2 , . init = redirect_all_std )
{
    my_printf ("%d", -42);
    cr_assert_stdout_eq_str ("-42");
}

Test ( my_printf , nombrei1 , . init = redirect_all_std )
{
    my_printf ("%i", 42);
    cr_assert_stdout_eq_str ("42");
}
Test ( my_printf , nombrei2 , . init = redirect_all_std )
{
    my_printf ("%d", -42);
    cr_assert_stdout_eq_str ("-42");
}

Test ( my_printf , nombreu1 , . init = redirect_all_std )
{
    my_printf ("%u", -42);
    cr_assert_stdout_eq_str ("4294967254");
}

Test ( my_printf , nombreu2 , . init = redirect_all_std )
{
    my_printf ("%u", 42);
    cr_assert_stdout_eq_str ("42");
}

Test ( my_printf , nombrel1 , . init = redirect_all_std )
{
    my_printf ("%l", 42424242);
    cr_assert_stdout_eq_str ("42424242");
}

Test ( my_printf , nombrel2 , . init = redirect_all_std )
{
    my_printf ("%l", -2147483648123456790);
    cr_assert_stdout_eq_str ("-2147483648123456790");
}

Test ( my_printf , nombref1 , . init = redirect_all_std )
{
    my_printf ("%f", 42.42);
    cr_assert_stdout_eq_str ("42.420000");
}

Test ( my_printf , nombref2 , . init = redirect_all_std )
{
    my_printf ("%f", -42.42);
    cr_assert_stdout_eq_str ("-42.420000");
}

Test ( my_printf , octal , . init = redirect_all_std )
{
    my_printf ("%o", 424242);
    cr_assert_stdout_eq_str ("1474462");
}

Test ( my_printf , binaire , . init = redirect_all_std )
{
    my_printf ("%b", 424);
    cr_assert_stdout_eq_str ("110101000");
}

Test ( my_printf , hexadecimal1 , . init = redirect_all_std )
{
    my_printf ("%x", 4242);
    cr_assert_stdout_eq_str ("1092");
}

Test ( my_printf , hexadecimal2 , . init = redirect_all_std )
{
    my_printf ("%x", 424);
    cr_assert_stdout_eq_str ("1a8");
}

Test ( my_printf , hexadecimaj1 , . init = redirect_all_std )
{
    my_printf ("%X", 4242);
    cr_assert_stdout_eq_str ("1092");
}

Test ( my_printf , hexadecimaj2 , . init = redirect_all_std )
{
    my_printf ("%X", 424);
    cr_assert_stdout_eq_str ("1A8");
}

Test ( my_printf , modulo1 , . init = redirect_all_std )
{
    my_printf ("%%");
    cr_assert_stdout_eq_str ("%%");
}

Test ( my_printf , modulo2 , . init = redirect_all_std )
{
    my_printf ("%%\n");
    cr_assert_stdout_eq_str ("%\n");
}

Test ( my_printf , adressepointer1 , . init = redirect_all_std )
{
    int nm = 4242;
    my_printf ("%p", nm);
    cr_assert_stdout_eq_str ("0x1092");
}

Test ( my_printf , adressepointer2 , . init = redirect_all_std )
{
    int nm = 42424;
    my_printf ("%p", nm);
    cr_assert_stdout_eq_str ("0xa5b8");
}

Test ( my_printf , sign1 , . init = redirect_all_std )
{
    my_printf ("%+", 42);
    cr_assert_stdout_eq_str ("+42");
}

Test ( my_printf , sign2 , . init = redirect_all_std )
{

    my_printf ("%+", -42);
    cr_assert_stdout_eq_str ("-42");
}