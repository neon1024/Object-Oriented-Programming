//
// Created by MSI on 12/03/2023.
//

#include "console.h"


int get_estate_price_from_console() {
    int price;

    printf("Estate price: ");
    scanf("%d", &price);

    return price;
}

int get_estate_surface_from_console() {
    int surface;

    printf("Estate surface: ");
    scanf("%d", &surface);

    return surface;
}

void read_estate_address_from_console(char* address) {
    printf("Estate address: ");
    scanf("%s", address);
}

int get_estate_type_from_console() {
    char type[10];

    printf("Estate type [house/apartment/penthouse]: ");
    scanf("%s", type);

    if(stricmp(type, "house") == 0)
        return 1;

    if(stricmp(type, "apartment") == 0)
        return 2;

    if(stricmp(type, "penthouse") == 0)
        return 3;

    return -1;
}

int get_option_from_console() {
    int user_input;

    printf("> ");
    scanf("%d", &user_input);

    return user_input;
}

void print_options() {
    printf("1: Add an estate.\n");
    printf("2: Delete an estate.\n");
    printf("3: Update an estate.\n");
    printf("4: Display all estates whose address contains a given string, sorted ascending by their price.\n");
    printf("5: See all estates of a given type, having the surface greater than a user provided value.\n");
    printf("6: Undo the last performed operation.\n");
    printf("7: Redo the last performed operation.\n");
    printf("0: Exit.\n");
}

void run_console() {
    int type;
    int surface;
    int price;
    char address[ADDRESS_SIZE];

    while(1) {
        print_options();

        int chosen_option;

        chosen_option = get_option_from_console();

        switch(chosen_option) {
            case 1:
                // get estate type
                type = get_estate_type_from_console();

                if(type == -1) {
                    invalid_estate_type_error();
                    break;
                }

                read_estate_address_from_console(address);

                surface = get_estate_surface_from_console();

                price = get_estate_price_from_console();

                add_estate(type, address, surface, price);

                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            case 0:
                return;

            default:
                invalid_console_option_error();
        }
    }
}
