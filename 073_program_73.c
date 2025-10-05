/*
#include <stdio.h>
#include <string.h>
int main() {
char s[100], temp;
int i, j;
printf("Enter a string: ");
scanf("%s", s);
j = strlen(s) - 1;
for (i = 0; i < j; i++, j--) {
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
printf("Reversed string: %s", s);
return 0;
}
*/
