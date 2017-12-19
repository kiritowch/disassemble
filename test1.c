#include <stdio.h>
#include <string.h>
void success() { puts("You Hava already controlled it."); }
int vulnerable() {
  char s[12];
  //gets(s);
  fgets(s, 50, stdin);
  puts(s);
  return 1;
}
int main(int argc, char **argv) {
int a;  
a = vulnerable();
printf("%d", a);
  return 0;
}
