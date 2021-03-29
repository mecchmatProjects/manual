/* setlocale example */
#include <stdio.h>      /* printf */
#include <locale.h>     /* struct lconv, setlocale, localeconv */

int main ()
{
    printf ("Locale is: %s\n", setlocale(LC_ALL,NULL) );
    setlocale (LC_ALL,"");
    struct lconv *lc;
    lc = localeconv ();
    printf ("Currency symbol is: %s\n-\n",lc->currency_symbol);
    setlocale (LC_ALL,"Ukrainain");
    printf ("наша валюта: %s\n-\n",lc->currency_symbol);
}
