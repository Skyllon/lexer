#pragma once

#include <stdio.h>  // For sentinel value as NULL
#include <string.h> // For string comparison
#include <ctype.h>

/*
    @brief: check if token is keyword

    @param: token - word that will be checked

    @return: 1 - is keyword, 0 - isn't keyword
*/
_Bool is_keyword(char *token);

/*
    @brief: check if token is operator

    @param: token - word that will be checked

    @return: 1 - is operator, 0 - isn't operator
*/
_Bool is_operator(char *token);

/*
    @brief: check if identifier is valid

    @param: token - word that will be checked

    @return: 1 - valid, 0 - invalid
*/
_Bool is_valid_identifier(char *token);
