/*
#include <stdio.h>
#include <string.h>
int main() {
char s[100];
int i, vowels = 0, consonants = 0;
printf("Enter a string: ");
fgets(s, sizeof(s), stdin);
for (i = 0; s[i] != '\0'; i++) {
if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
vowels++;
else
consonants++;
}
}
printf("Vowels: %d, Consonants: %d", vowels, consonants);
return 0;
}
*/
