#include <stdio.h>     /* printf ja scanf */
/* #define KM_MAILISSA 1.609 muunnosvakio makron avulla */
const double KM_MAILISSA = 1.609;   /* muunnosvakio vakiomuuttujana, parempi tapa */

int main(void)
{
    double mailit,      /* et�isyys maileissa */
    kilometrit;         /* et�isyys kilometreiss� */

    /* Luetaan sis��n et�isyys maileissa */
    printf("Anna et�isyys maileissa >");
    scanf("%lf", &mailit);

    /* muuta et�isyys kilmetreiksi */
    kilometrit = KM_MAILISSA * mailit;

    /* tulosta et�isyys kilometreiss� */
    printf("Et�isyys on %lf kilometri�", kilometrit);

    return 0;
}
