#include<main.h>

/**
 * _isupper - check if a character is an upper case
 *
 * return: 0 Always
 **/

int _isupper(int c)
{

     char uppercase = 'A';
     int isupper = 0;

     for (; uppercase <= 'Z'; uppercase++)
     {
         if (c == uppercase)
         {
             isupper = 1;
             break;
            
         }
     }
     return (isupper);
}
