/*this prints all the alphabets in capitals
and also in small*/
#include <stdio.h>
main(){
  char a, b;
    for(a='65';a<=90;a++){
      printf("%c\t", a);
    }
  printf("\n\n\n");
    for(b='97';b<=122;b++){
      printf("%c\t", b);
    }
}
