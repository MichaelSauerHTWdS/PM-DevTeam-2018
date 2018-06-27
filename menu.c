#include <stdio.h>
#include "scanflib.h"

#define ITEM_HILFE  0
#define ITEM_KOM1   1
#define ITEM_KOM2   2
#define ITEM_KOM3   3
<<<<<<< HEAD
#define ITEM_ENDE   4
#define PHILIPP     5
=======
#define ITEM_PHBARTH 23
#define ITEM_ENDE   99
>>>>>>> phbarth



char * komMenu[]={"\n 0\tHilfetext\n",
                  " 1\t1.Kommando\n",
                  " 2\t2.Kommando\n",
                  " 3\t3.---------\n",
<<<<<<< HEAD
                  " 4\a\tEnde\n",
		  " 5\t Philipp\n"};
=======
                  " 4\t4.PHBARTH\n",
                  " 5\a\tEnde\n"};
>>>>>>> phbarth
int steuerMenu(void);

int main(int argc, char* argv[])
  {
  return steuerMenu();
  }  
				  
int steuerMenu()
  {
  int kommando = 1;

  do{ 
    for (int i=0; i<(sizeof(komMenu)/sizeof(char *)); i++)
      {
      printf("%s",komMenu[i]);
      }
    printf("$:");
if (readInteger(&kommando)!=NO_ERROR)
	  {
	    printf("keine Zahl");
	  }
	  
    switch (kommando)
      {
      case  ITEM_HILFE:  printf("%s",komMenu[ITEM_HILFE]);
                         break;
      case  ITEM_KOM1:   printf("%s",komMenu[ITEM_KOM1]);
                         break;
      case  ITEM_KOM2:   printf("%s",komMenu[ITEM_KOM2]);
                         break;
      case  ITEM_KOM3:   printf("%s",komMenu[ITEM_KOM3]);
                         break;
      case  ITEM_PHBARTH: printf("%s", komMenu[ITEM_PHBARTH]);
                          break;
      case  ITEM_ENDE:   printf("%s",komMenu[ITEM_ENDE]);
                         break;
      case  PHILIPP:	 printf("%s",komMenu[PHILIPP]);
			 break;
      default: printf("\nkein Kommando\n");
      }
    }while(kommando!=ITEM_ENDE);
   
    return(0);
  }
