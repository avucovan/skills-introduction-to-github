#include <stdio.h>
int main ()
{
FILE *fp;
char ch;
fp = fopen("hello.txt", "a");
printf ("Enter data:\n");
while ((ch = getchar()) != EOF) {
    putc (ch,fp);
}
fclose(fp);
fp = fopen("hello.txt", "r");

while( (ch = getc(fp) != EOF))
    printf("%c", ch);

fclose(fp);
}