#include <stdio.h>
#include <stdlib.h>
/*
function to print the table, here the board array is the parameter
*/
void print_table(char board [][8])
{
    int col=1;
    int row=1;
    printf ("\n ");
    for (col;col<=8;col++){
         printf("   %d", col);}
         printf("\n");
    //for (row;row<=8;row++){
       // printf ("   +");}
   char col_l = 'a';
   for(row; row <= 8; row++)
   {
     printf("  +");
     for(col=1; col<=8; col++)
       printf("---+");
     printf("\n %c|",col_l+row);

     for(col=1; col<=8; col++)
       printf("   |");
     printf("\n");
   }

   printf("  +");
   for(col = 0 ; col<8 ;col++)
     printf("---+");
   printf("\n");
}

    int main()
{
    char answer;
    char board[8][8];
  printf("First step is yours\n");
  printf("   You will be white - (O)\n   Computer will be black   - (X)\n");
  printf("\nGive your move in the form of :Number and Letter(for example, 1f)\n");
  printf("\n Here number represents the column and letter represents the row");
  printf("\n Are you ready?(Type y or n)\n");
  scanf ("%c", &answer);
  if (answer=='y'){
    print_table (board);}
  else {
    return 0;
  }



return 0;
}


