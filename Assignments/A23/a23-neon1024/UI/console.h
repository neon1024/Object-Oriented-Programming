#pragma once

#include <stdio.h>
#include <string.h>

#include "Estate.h"
#include "CustomErrors.h"
#include "estate_repository.h"
#include "estate_service.h"

void run_console();

void print_options();

int get_option_from_console();

int get_estate_type_from_console();

void read_estate_address_from_console(char*);

int get_estate_surface_from_console();

int get_estate_price_from_console();
