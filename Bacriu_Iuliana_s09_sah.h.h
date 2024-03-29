#ifndef SAH_H_INCLUDED
#define SAH_H_INCLUDED

void init(char table[][8]);

void print(char table[][8]);

int find(char table[][8], char piece, char cols[], int rows[]);

void encode(char table[][8], char* fen);

void decode(char table[][8],char* fen);

#endif // SAH_H_INCLUDED
