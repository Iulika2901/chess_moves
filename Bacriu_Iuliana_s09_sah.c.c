void init(char table[][8])
{

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if(i>=2 && i<=5) table[i][j]=' ';
            if(i==1)table[i][j]='p';
           if(i==6)table[i][j]='P';
            if((i==0 && j==0) || (i==0 && j==7))table[i][j]='r';
            if((i==7 && j==0) || (i==7 && j==7))table[i][j]='R';
            if((i==0 && j==1) || (i==0 && j==6))table[i][j]='n';
            if((i==7 && j==1) || (i==7 && j==6))table[i][j]='N';
            if((i==0 && j==2) || (i==0 && j==5))table[i][j]='b';
            if((i==7 && j==2) || (i==7 && j==5))table[i][j]='B';
            if(i==0 && j==3) table[i][j]='q';
            if(i==0 && j==4) table[i][j]='k';
            if(i==7 && j==3) table[i][j]='Q';
            if(i==7 && j==4) table[i][j]='K';
        }

}



void print(char table[][8])
{
    printf("  ");
    for(int i=0; i<=7; i++) printf("%c",'a'+i);
    puts("\n");

    for(int i=0; i<=7; i++)
    {
        printf("%d ",8-i);
        for(int j=0; j<=7; j++)
            printf("%c",table[i][j]);
        printf("\n");
    }
}



int find(char table[][8], char piece, char cols[], int rows[])
{
    int s=0;

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
        {
            if(table[i][j]==piece)
            {
                cols[s]='a'+j;
                rows[s]=8-i;
                s++;
            }
        }



    return s;
}


void encode(char table[][8], char* fen)
{
    int ct=0;
    for(int i=0; i<8; i++)
    {
        int s=0;
        for(int j=0; j<8; j++)
        {


        if( j>0 && table[i][j]!=' ' && table[i][j-1]==' ')
            {
                *(fen+ct)=s+48; ct++;
                s=0;
            }
            else
           if(table[i][j]==' ')
            {
                s++;

                ct--;
            }


            if (j == 7)
            {
                if (s > 0)
                {
                 ct++;
                    *(fen + ct) = s + 48;
                    s = 0;
                }
            }

            if(table[i][j]=='p')
            {
                *(fen+ct)='p';
                s=0;

            }
            if(table[i][j]=='P')
            {
                *(fen+ct)='P';
                s=0;

            }
            if(table[i][j]=='r')
            {
                *(fen+ct)='r';
                s=0;

            }
            if(table[i][j]=='R')
            {
                *(fen+ct)='R';
                s=0;

            }
            if(table[i][j]=='n' )
            {
                *(fen+ct)='n';
                s=0;

            }
            if(table[i][j]=='N')
            {
                *(fen+ct)='N';
                s=0;

            }
            if(table[i][j]=='b')
            {
                *(fen+ct)='b';
                s=0;

            }
            if(table[i][j]=='B')
            {
                *(fen+ct)='B';
                s=0;

            }
            if(table[i][j]=='q')
            {
                *(fen+ct)='q';
                s=0;

            }
            if( table[i][j]=='k')
            {
                *(fen+ct)='k';
                s=0;

            }
            if(table[i][j]=='Q')
            {
                *(fen+ct)='Q';
                s=0;

            }
            if( table[i][j]=='K')
            {
                *(fen+ct)='K';
                s=0;

            }





            ct++;
        }
        *(fen+ct)='/';
        ct++;
    }


    *(fen+ct-1)='\0';


}


void decode(char table[][8], char* fen)
{
    int i=0;
    int row=0,col=0;
    while(*(fen+i)!='\0')
    {
        if(fen[i]=='/')
        {
            row++;
            col=0;
        }
        if((fen[i]>='a' && fen[i]<='z')||(fen[i]>='A' && fen[i]<='z'))
        {
            table[row][col]=fen[i];
            col++;
        }
        else if(fen[i]>='1' && fen[i]<='8')
            for(int l=0; l<fen[i]-'0'; l++)
            {
                table[row][col]=' ';
                col++;
            }
        i++;
    }

}
