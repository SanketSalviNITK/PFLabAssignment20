#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
  char name[20],name2[20];
  int len;
  int cmp,ch;
  do{
  printf("*** Menu driven String Ops ***\n");
  printf("1. String Length:\n");
  printf("2. String Copy:\n");
  printf("3. String Compare:\n");
  printf("4. String Concate:\n");
  printf("5. Exit:\n");
  printf("Select(1-5):");
  scanf("%d",&ch);
  switch(ch){
    case 1:
      printf("Enter a string:");
      scanf("%s",name);
      len=strlen(name);
      printf("\nString length is:%d\n",len);

    break;

    case 2:
      printf("Enter a string:");
      scanf("%s",name);
      strcpy(name2,name);
      printf("\nString:%s\n",name);
      printf("Copied String is:%s\n",name2);
    break;

    case 3:
      printf("Enter string1:");
      scanf("%s",name);
      printf("Enter string2:");
      scanf("%s",name2);
      cmp=strcmp(name2,name);
      if(cmp==0)
        printf("Both strings are same\n");
      else
        printf("Strings are different\n");
    break;

    case 4:
      printf("Enter string1:");
      scanf("%s",name);
      printf("Enter string2:");
      scanf("%s",name2);
      strcat(name2,name);
      printf("Concatenated string is:%s\n",name2);

    break;

    case 5:exit(0);
    break;
    
  }}while(ch!=0);
  return 0;
}