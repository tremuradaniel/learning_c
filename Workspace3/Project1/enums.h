#ifndef ENUMS_H
#define ENUMS_H
#include <stdio.h>
void enumTypesExercise() {
    enum companies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
    
    enum companies comp1;
    enum companies comp2;
    enum companies comp3;
    
    comp1 = XEROX;
    comp2 = GOOGLE;
    comp3 = EBAY;
    
    printf("%d \n",comp1);
    printf("%d \n",comp2);
    printf("%d \n",comp3);
}

#endif