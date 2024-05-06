// Includes
#include <stdio.h>
#include <string.h>
#include "domains.h"
// Main function 
int main(void) {
    // Read user input
    #define LEN 4
    char user_input[LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, LEN, stdin);
    // Enter your code under here
    // Use strcmp(user_input, country_codes[0].domain) to compare the text in user_input to the text in country_codes[0].domain.
    int i;
    int num_domains = sizeof(country_codes) / sizeof(country_codes[0]);
    int domain_status = 0;
    if (user_input[strlen(user_input) - 1] == '\n') {
        user_input[strlen(user_input) - 1] = '\0';
    }
    for (i = 0; i < num_domains; ++i) {
        if (strcmp(user_input, country_codes[i].domain) == 0) {
            printf("This is the domain for: %s\n", country_codes[i].country);
        domain_status = 1;
            break;
        }
    }
    if (domain_status) {
        printf("Domain not found.\n");
    }
    // Do not edit below here
    return 0;
}