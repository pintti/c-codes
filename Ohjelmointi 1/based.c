#include <stdio.h>
#include <stdlib.h>

int main(void){


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *infile;
    infile = fopen("teksti.txt", "r");

    if(!(infile)){
        printf("Tiedoston avaaminen epäonnistui");
        return 0;
    }


    fclose(infile);

    return 0;
}
