#include <stdio.h>

int my_putchar(char);
int my_compute_factorial_rec(int nb);
int my_compute_factorial_it(int nb);
int my_compute_power_it(int nb, int p);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int count_valid_queens_placements(int n);

int main(void)
{

    printf("Dont %d \n", my_compute_factorial_rec(-1));
    printf("%d \n", my_compute_factorial_rec(0));
    printf("%d \n", my_compute_factorial_rec(1));
    printf("%d \n", my_compute_factorial_rec(2));
    printf("%d \n", my_compute_factorial_rec(3));
    printf("%d \n", my_compute_factorial_rec(4));
    printf("%d \n", my_compute_factorial_rec(5));
    printf("%d \n", my_compute_factorial_rec(6));
    printf("%d \n", my_compute_factorial_rec(7));
    printf("%d \n", my_compute_factorial_rec(8));
    printf("%d \n", my_compute_factorial_rec(9));
    printf("%d \n", my_compute_factorial_rec(10));
    printf("%d \n", my_compute_factorial_rec(11));
    printf("%d \n", my_compute_factorial_rec(12));
    printf("Dont %d \n\n\n", my_compute_factorial_rec(13));

    printf("Dont %d \n", my_compute_factorial_it(-1));
    printf("%d \n", my_compute_factorial_it(0));
    printf("%d \n", my_compute_factorial_it(1));
    printf("%d \n", my_compute_factorial_it(2));
    printf("%d \n", my_compute_factorial_it(3));
    printf("%d \n", my_compute_factorial_it(4));
    printf("%d \n", my_compute_factorial_it(5));
    printf("%d \n", my_compute_factorial_it(6));
    printf("%d \n", my_compute_factorial_it(7));
    printf("%d \n", my_compute_factorial_it(8));
    printf("%d \n", my_compute_factorial_it(9));
    printf("%d \n", my_compute_factorial_it(10));
    printf("%d \n", my_compute_factorial_it(11));
    printf("%d \n", my_compute_factorial_it(12));
    printf("Dont %d \n", my_compute_factorial_it(13));

    printf("Dont %d \n", my_compute_power_it(-5, 0));
    printf("Dont %d \n", my_compute_power_rec(-5, 0));
    printf("%d \n", my_compute_power_it(5, 0));
    printf("%d \n", my_compute_power_rec(5, 0));
    printf("%d \n", my_compute_power_it(5, -5));
    printf("%d \n", my_compute_power_rec(5, -5));                                                                     
    printf("%d \n", my_compute_power_it(-5, 5));
    printf("%d \n", my_compute_power_rec(-5, 5));                                                                     
    printf("%d \n", my_compute_power_it(1, 1));
    printf("%d \n", my_compute_power_rec(1, 1));                                                                     
    printf("%d \n", my_compute_power_it(2, 2));                                                                     
    printf("%d \n", my_compute_power_rec(2, 2));
    printf("%d \n", my_compute_power_it(2, 4));                                                                     
    printf("%d \n", my_compute_power_rec(2, 4));
    printf("%d \n", my_compute_power_it(9, 9));                                                                     
    printf("%d \n", my_compute_power_rec(9, 9));
    printf("%d \n", my_compute_power_it(5, 2));
    printf("%d \n", my_compute_power_rec(5, 2));
    printf("%d \n", my_compute_power_it(2, 5));                                                                     
    printf("%d \n", my_compute_power_rec(2, 5));
    printf("%d \n", my_compute_power_it(1, 9));                                                                     
    printf("%d \n", my_compute_power_rec(1, 9));    
    printf("%d \n", my_compute_power_it(9, 1));
    printf("%d \n", my_compute_power_rec(9, 1));

    printf("%d \n", my_compute_square_root(144));
    printf("%d \n", my_compute_square_root(169));
    printf("%d \n", my_compute_square_root(196));
    printf("%d \n", my_compute_square_root(225));
    printf("%d \n", my_compute_square_root(256));
    printf("%d \n", my_compute_square_root(289));
    printf("%d \n", my_compute_square_root(500));

    printf("%d \n", my_is_prime(-1));
    printf("%d \n", my_is_prime(0));   
    printf("%d \n", my_is_prime(1));   
    printf("%d \n", my_is_prime(2));   
    printf("%d \n", my_is_prime(3));   
    printf("%d \n", my_is_prime(4));   
    printf("%d \n", my_is_prime(5));   
    printf("%d \n", my_is_prime(6));   
    printf("%d \n", my_is_prime(7));   
    printf("%d \n", my_is_prime(8));   
    printf("%d \n", my_is_prime(9));
    printf("%d \n", my_is_prime(10));   
    printf("%d \n", my_is_prime(11));

    printf("-1 => %d \n", my_find_prime_sup(-1));
    printf("0 => %d \n", my_find_prime_sup(0));                                                                  
    printf("1 => %d \n", my_find_prime_sup(1));                                                                
    printf("2 => %d \n", my_find_prime_sup(2));                                                             
    printf("3 => %d \n", my_find_prime_sup(3));                                                                 
    printf("4 => %d \n", my_find_prime_sup(4));                                                               
    printf("5 => %d \n", my_find_prime_sup(5));                                                           
    printf("6 => %d \n", my_find_prime_sup(6));                                                          
    printf("7 => %d \n", my_find_prime_sup(7));                                                              
    printf("8 => %d \n", my_find_prime_sup(8));                                                             
    printf("9 => %d \n", my_find_prime_sup(9));                                                        
    printf("10 => %d \n", my_find_prime_sup(10));                                                         
    printf("11 => %d \n", my_find_prime_sup(11));
}
