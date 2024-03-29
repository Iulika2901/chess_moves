#include <stdio.h>
#include <stdlib.h>
#include "sah.h"

int main()
{

     int r[64] = {[5] = 9, [1] = 6, [21] = 909};
    char tb[8][8] = {
    {'B', 'R', ' p', 'r', 'R', 'p', 'p', 'B'},
    {' ', 'P', ' ', ' ', 'P', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'p', ' ', ' ', ' ', ' ', ' ', ' ', 'K'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'q', ' ', ' ', ' ', 'B', ' ', ' ', 'Q'}
};
    char c[64] = {[7] = '8'},*h="r3k1nr/pppppppp/8/6p1/8/p7/7p/3QK2R";
    char tab[10000];
    init(tb);
    print(tb);

   printf(" \n \n punctul b) \n");
    printf("%d", find(tb,'R',c,r));

    printf(" \n punctul c)\n");
     for(int i=0; i<find(tb,'R',c,r); i++)
      printf("%c %d \n",c[i],r[i]);

    printf("  \n \n tema 2, punctul a) \n");
    encode(tb,tab);
    printf("%s",tab);

    printf(" \n  \n \n tema 2, punctul b)  \n");
    decode(tb,h);
    print(tb);
    return 0;

}
