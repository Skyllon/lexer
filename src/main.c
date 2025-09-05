#include "../include/processing.h"

int main(void)
{
    char expression[] = "double b = 4.f + (c & a);\0";
    char *token  = strtok(expression, " ()[],;:?!");

    while (token != NULL) {
        if(is_keyword(token))
            printf("Keyword: %s\n", token);
        else if(is_operator(token))
            printf("Operator: %s\n", token);
        else if(is_valid_identifier(token))
            printf("Identifier: %s\n", token);
        else
            printf("Number: %s\n", token);

        token  = strtok(NULL, " ()[],;:?!");
    }
}
