#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;

void one_call() {
  char s[12];
  gets(s);
  puts(s);
  puts("You Hava already controlled it1."); 
}

void two_call() { 
    one_call();
    puts("You Hava already controlled it2."); 
}

void three_call() { 
    two_call();
    puts("You Hava already controlled it3."); 
}
void cycle_for() { 
    int i = 0;
    for(i = 0; i < 10; i ++){
        printf ("hello,cycle_for");
    }
}
void cycle_while() { 
    while(1){
        printf ("hello,cycle_while");
    }
}
void offshoot_if(int i) { 
    if (i == 10){
        printf ("hello,offshoot_if");
    }
    else {
        printf ("sorry,offshoot_if");
    }
}
void offshoot_switch(int i) { 
    switch(i){
        case 1: printf ("hello,offshoot_switch1");break;
        case 5: printf ("hello,offshoot_switch5");break;
        case 10: printf ("hello,offshoot_switch10");break;
        default:printf ("sorry,offshoot_switch10");
    }
}
void data_local() { 
    char s;
    int a;
    a = 1;
  printf("%d",a);
    float b ;
    b = 0.1;
  printf("%f",b);
    double c;
    c = 0.2;
  printf("%f",c);

    int d[2] = {1,2};
     printf("%d",d[1]);
    int *e = d;

    char f[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char g[] = "Hello";

    struct Books Book1;
    Book1.book_id = 1;
}

void operation() { 
    int a = 1;
    int b = 2;
    int c;
    c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = a % b;
    c = a++;

}


void parameter(int a,int b,float c,double d) {
    int aa,bb,cc;
    aa = b +=1;
    bb = c +=1;
    cc = d +=1;
  char s[12];
  gets(s);
  printf("%d",a);
  printf("%d",aa);
  printf("%f",bb);
  printf("%f",cc);
}

double factorial(unsigned int i)
{
   if(i <= 1)
   {
      return 1;
   }
   return i * factorial(i - 1);
}

int main(int argc, char **argv) {
    char s;
    s = "a";
    int a;
    a = 1;
  printf("%d",a);
    float b ;
    b = 0.1;
  printf("%f",b);
    double c;
    c = 0.2;
  printf("%f",c);
  one_call();
  three_call();
  parameter(11,a,b,c);
offshoot_if(10);
  offshoot_switch(10);


      int i = 15;
    printf("%d 的阶乘为 %f\n", i, factorial(i));


    char *description;
   /* 动态分配内存 */
   description = malloc( 200 * sizeof(char) );
     if( description == NULL )
   {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else
   {
      strcpy( description, "Zara ali a DPS student in class 10th");
   } 
      printf("Description: %s\n", description );



  return 0;
}
