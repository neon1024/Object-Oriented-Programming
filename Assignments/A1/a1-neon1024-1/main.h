#pragma once

#include <stdio.h>

int main();

void print_menu_options();

int get_option_from_user();

int get_length_from_user();

void read_vector_from_user(int*, int*);

void print_vector(int*, int);

int get_limit();

int is_prime(int);

int get_next_prime(int);

void generate_all_the_prime_numbers_smaller_than_a_given_number(int*, int*);

void find_the_longest_increasing_contiguous_subsequence_such_that_the_sum_of_any_2_consecutive_numbers_is_prime(int*, int, int*, int*);

void run_menu();
