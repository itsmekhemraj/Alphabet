
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
int main()
{
  int i,len;
  char name[30];
  printf("Hospital's Name:- ");
  fgets(name,30,stdin);
  len=strlen(name);
  for(i=0;i<len;i++)
  {
    name[i]=toupper(name[i]);
  }
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='C'|| name[i]=='E'|| name[i]=='F' || name[i]=='G'|| name[i]=='I'|| name[i]=='J' || name[i]=='O'|| name[i]=='P'|| name[i]=='R'|| name[i]=='S'|| name[i]=='T'|| name[i]=='Z')
    {
      printf("   88888");
    }
    else if (name[i]=='B')
    {
      printf("   8888 ");
    }
    else if (name[i]=='Q')
    {
        printf("   8888 ");
    }
    else if(name[i]=='H' || name[i]=='K'|| name[i]=='M' || name[i]=='N' || name[i]=='U'|| name[i]=='V'|| name[i]=='W'|| name[i]=='Y')
    {
      printf("   8   8");
    }
    else if (name[i]=='X')
    {
      printf("   8   8");
    }
    else if(name[i]=='D')
    {
      printf("   88   ");
    }
    else if(name[i]=='L')
    {
      printf("   8    ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='H'|| name[i]=='O' || name[i]=='P'|| name[i]=='R' || name[i]=='U'|| name[i]=='V'|| name[i]=='W')
    {
      printf("   8   8");
    }
    else if (name[i]=='Q')
    {
        printf("   8  8 ");
    }
    else if (name[i]=='G')
    {
        printf("   8    ");
    }
    else if(name[i]=='C'|| name[i]=='E' || name[i]=='F'|| name[i]=='L'|| name[i]=='S')
    {
      printf("   8    ");
    }
    else if(name[i]=='M')
    {
      printf("   88 88");
    }
    else if(name[i]=='Y')
    {
      printf("    8 8 ");
    }
    else if(name[i]=='K')
    {
      printf("   8  8 ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T')
    {
      printf("     8  ");
    }
    else if(name[i]=='D')
    {
      printf("   8 8  ");
    }
    else if(name[i]=='N')
    {
      printf("   88  8");
    }
    else if(name[i]=='Z')
    {
      printf("       8");
    }
    else if(name[i]=='X')
    {
      printf("    8 8 ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='H'|| name[i]=='O' || name[i]=='P'|| name[i]=='R' || name[i]=='U'|| name[i]=='V'|| name[i]=='W')
    {
      printf("   8   8");
    }
    else if (name[i]=='N')
    {
      printf("   88  8");
    }
    else if (name[i]=='Q')
    {
        printf("   8  8 ");
    }
    else if (name[i]=='G')
    {
        printf("   8    ");
    }
    else if(name[i]=='C'|| name[i]=='E' || name[i]=='F'|| name[i]=='L'|| name[i]=='S')
    {
      printf("   8    ");
    }
    else if(name[i]=='M')
    {
      printf("   8 8 8");
    }
    else if(name[i]=='Y')
    {
      printf("     8  ");
    }
    else if(name[i]=='K')
    {
      printf("   8 8  ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T')
    {
      printf("     8  ");
    }
    else if(name[i]=='D')
    {
      printf("   8  8 ");
    }
    else if(name[i]=='X')
    {
      printf("     8  ");
    }
    else if(name[i]=='Z')
    {
      printf("       8");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='E' || name[i]=='F'|| name[i]=='H'|| name[i]=='P'|| name[i]=='R'|| name[i]=='S' )
    {
      printf("   88888");
    }
    else if (name[i]=='Q')
    {
        printf("   8  8 ");
    }
    else if (name[i]=='G')
    {
        printf("   88888");
    }
    else if(name[i]=='D')
    {
      printf("   8   8");
    }
    else if(name[i]=='C')
    {
      printf("   8    ");
    }
    else if(name[i]=='O'|| name[i]=='V'|| name[i]=='U')
    {
      printf("   8   8");
    }
    else if (name[i]=='W')
    {
      printf("   8 8 8");
    }
    else if (name[i]=='M')
    {
      printf("   8 8 8");
    }
    else if(name[i]=='Z')
    {
      printf("      8 ");
    }
    else if(name[i]=='K')
    {
      printf("   88   ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     8  ");
    }
    else if(name[i]=='L')
    {
      printf("   8    ");
    }
    else if(name[i]=='N')
    {
      printf("   8 8 8");
    }
    else if(name[i]=='X')
    {
      printf("    8 8 ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='H' || name[i]=='M'|| name[i]=='O'||name[i]=='U'|| name[i]=='V')
    {
      printf("   8   8");
    }
    else if (name[i]=='N')
    {
      printf("   8  88");
    }
    else if (name[i]=='D')
    {
      printf("   8   8");
    }
    else if(name[i]=='C'|| name[i]=='E'|| name[i]=='F'|| name[i]=='L'|| name[i]=='P')
    {
      printf("   8    ");
    }
    else if(name[i]=='S')
    {
      printf("       8");
    }
    else if (name[i]=='Q')
    {
        printf("   8888 ");
    }
    else if(name[i]=='G')
    {
        printf("   8   8");
    }
    else if(name[i]=='K')
    {
      printf("   8 8  ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     8  ");
    }
    else if(name[i]=='R')
    {
      printf("   8 8  ");
    }
    else if(name[i]=='W')
    {
      printf("   8 8 8");
    }
    else if(name[i]=='X')
    {
      printf("   8   8");
    }
    else if(name[i]=='Z')
    {
      printf("     8  ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='H' || name[i]=='M'|| name[i]=='O'||name[i]=='U')
    {
      printf("   8   8");
    }
    else if (name[i]=='V')
    {
      printf("    8 8 ");
    }
    else if (name[i]=='D')
    {
        printf("   8  8 ");
    }
    else if(name[i]=='C'|| name[i]=='E'|| name[i]=='F'|| name[i]=='L'|| name[i]=='P')
    {
      printf("   8    ");
    }
    else if(name[i]=='S')
    {
      printf("       8");
    }
    else if (name[i]=='Q')
    {
        printf("       8");
    }
    else if (name[i]=='G')
    {
        printf("   88888");
    }
    else if(name[i]=='K')
    {
      printf("   8  8 ");
    }
    else if(name[i]=='I'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     8  ");
    }
    else if(name[i]=='R')
    {
      printf("   8  8 ");
    }
    else if(name[i]=='W')
    {
      printf("   88 88");
    }
    else if(name[i]=='J')
    {
      printf("   8 8  ");
    }
    else if(name[i]=='N')
    {
      printf("   8  88");
    }
    else if(name[i]=='Z')
    {
      printf("    8   ");
    }
    else if(name[i]=='X')
    {
      printf("   8   8");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='C'|| name[i]=='E' || name[i]=='I'|| name[i]=='O'||name[i]=='L'|| name[i]=='S'|| name[i]=='U'|| name[i]=='Z')
    {
      printf("   88888");
    }
    else if (name[i]=='B')
    {
      printf("   8888 ");
    }
    else if (name[i]=='G')
    {
        printf("       8");
    }
    else if (name[i]=='D')
    {
        printf("   888  ");
    }
    else if(name[i]=='A'|| name[i]=='H'|| name[i]=='M'|| name[i]=='N')
    {
      printf("   8   8");
    }
    else if(name[i]=='F'|| name[i]=='P')
    {
      printf("   8    ");
    }
    else if(name[i]=='J')
    {
      printf("   888  ");
    }
    else if(name[i]=='K'||name[i]=='R')
    {
      printf("   8   8");
    }
    else if(name[i]=='Q')
    {
      printf("       8");
    }
    else if(name[i]=='T'|| name[i]=='Y')
    {
      printf("     8  ");
    }
    else if (name[i]=='V')
    {
      printf("     8  ");
    }
    else if(name[i]=='W'||name[i]=='X')
    {
      printf("   8   8");
    }
  }
  return 0;
}

