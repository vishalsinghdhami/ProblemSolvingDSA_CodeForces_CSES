// Created by H. Ahmadian

/* 
   I Want To Read a String Of Unknown Length
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GetStr (char* , char**);

int main() 
{
  char *Str =NULL;
  GetStr("Enter the String:- ",&Str); 
 //usncn printf("\n The String is:- %s \nAnd It's length:- %lu\n",Str,(strlen(Str)));
 free(Str);
 char *Str2 =NULL;
  GetStr("Enter the String:- ",&Str2); 
  //printf("\n The String is:- %s \nAnd It's length:- %lu\n",Str2,(strlen(Str2)));
 free(Str2);
} 

void GetStr(char *str,char **P_strp)
{ 
  printf("%s",str); 
  for(int i=0 ; 1 ; i++) 
    { 
     if(i) 
       *P_strp = (char*)realloc((*P_strp) , i+1);
      else
       *P_strp = (char*)malloc(i+1);
     (*P_strp)[i]=getchar();
     if((*P_strp)[i] == '\n' || (*P_strp)[i] == EOF)
       { 
        (*P_strp)[i]= '\0'; 
        break; 
       } 
     } 
}
