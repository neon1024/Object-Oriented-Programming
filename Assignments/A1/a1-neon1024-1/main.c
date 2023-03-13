#include "main.h"

void print_menu_options()
{
    printf("1: read a vector of numbers from the console\n");
    printf("2: generate all the prime numbers smaller than a given natural number n\n");
    printf("3: find the longest increasing contiguous subsequence from the vector, such that the sum of any 2 consecutive elements is prime\n");
    printf("0: exit\n");
}

int get_option_from_user()
{
    int user_input;

    printf(">");
    scanf("%d", &user_input);

    return user_input;
}

int get_length_from_user()
{
    int length;

    printf("length:");
    scanf("%d", &length);

    return length;
}

void read_vector_from_user(int *vector, int *length)
{
    *length = get_length_from_user();

    for (int i = 0; i < *length; i++)
    {
        printf("element %d:", i);
        scanf("%d", &vector[i]);
    }
}

void print_vector(int *vector, int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", vector[i]);
}

int get_limit()
{
    int limit;

    printf("n:");
    scanf("%d", &limit);

    return limit;
}

int is_prime(int number)
{
    if (number < 2)
        return 0;

    for (int d = 2; d*d <= number; d++)
        if (number % d == 0)
            return 0;

    return 1;
}

int get_next_prime(int number)
{
    while(is_prime(number) == 0)
        number += 1;

    return number;
}

void generate_all_the_prime_numbers_smaller_than_a_given_number(int *primes, int *primes_count)
{
    *primes_count = 0;

    int limit;

    limit = get_limit();

    int number;

    number = 2;

    while(number < limit)
    {
        *(primes + (*primes_count)) = number;

        *primes_count += 1;

        number += 1;

        number = get_next_prime(number);
    }
}

void find_the_longest_increasing_contiguous_subsequence_such_that_the_sum_of_any_2_consecutive_numbers_is_prime(int *vector, int len, int *start, int *end)
{
    *start = 0;
    *end = 0;

    int current_start = 0;
    int current_end = 0;
    int current_length = 0;
    int max_length = 0;

    for(int i = 1; i < len; i++)
    {
        if(is_prime(vector[i - 1] + vector[i]) && (vector[i - 1] < vector[i]))
        {
            if (current_length == 0)
            {
                current_start = i - 1;
                current_end = i;
                current_length = 2;
            }
            else
            {
                current_end = i;
                current_length += 1;
            }
        }
        else
        {
            if (current_length > max_length)
            {
                max_length = current_length;
                *start = current_start;
                *end = current_end;
            }

            current_start = 0;
            current_end = 0;
            current_length = 0;
        }
    }
}

void run_menu()
{
    int vector[100];  // the array that is read from the keyboard
    int length = 0;  // its length

    int primes[100];  // array that holds the prime numbers
    int primes_count;  // counter for the prime numbers

    int start;  // index for the start of the required subsequence
    int end;  // index for the end of the required subsequence

    while (1)
    {
        print_menu_options();

        int chosen_option;

        chosen_option = get_option_from_user();

        if (chosen_option == 0)
            break;

        switch(chosen_option)
        {
            case 1:
                // read a vector of numbers from the console
                read_vector_from_user(vector, &length);
                print_vector(vector, length);
                printf("\n");
                break;

            case 2:
                // generate all the prime numbers smaller than a given natural number n
                generate_all_the_prime_numbers_smaller_than_a_given_number(primes, &primes_count);
                print_vector(primes, primes_count);  // arrays are automatically parsed as an address? (no need to specify & for them?)
                printf("\n");
                break;

            case 3:
                // find the required subsequence
                if (length != 0)
                {
                    char answer;

                    printf("do you want to keep the read vector? [y/n]:");

                    getchar();

                    scanf("%c", &answer);

                    if (answer == 'y')
                    {
                        find_the_longest_increasing_contiguous_subsequence_such_that_the_sum_of_any_2_consecutive_numbers_is_prime(vector, length, &start, &end);
                        printf("start: %d\n", start);
                        printf("end: %d\n", end);
                    }
                    else
                    {
                        // read another vector
                        read_vector_from_user(vector, &length);
                        print_vector(vector, length);
                        printf("\n");
                        // proceed
                        find_the_longest_increasing_contiguous_subsequence_such_that_the_sum_of_any_2_consecutive_numbers_is_prime(vector, length, &start, &end);
                        printf("start: %d\n", start);
                        printf("end: %d\n", end);
                    }
                }
                else
                {
                    // read another vector
                    read_vector_from_user(vector, &length);
                    print_vector(vector, length);
                    printf("\n");
                    // proceed
                    find_the_longest_increasing_contiguous_subsequence_such_that_the_sum_of_any_2_consecutive_numbers_is_prime(vector, length, &start, &end);
                    printf("start: %d\n", start);
                    printf("end: %d\n", end);
                }
                break;

            default:
                printf("[!] Invalid input\n");
                break;
        }
    }
}

int main()
{
    run_menu();

    return 0;
}
