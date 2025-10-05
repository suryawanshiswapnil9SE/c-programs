/*
#include <stdio.h>
int main() {
int a[100], n, i, pos, value;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements: ");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
printf("Enter position and value to insert: ");
scanf("%d %d", &pos, &value);
for (i = n; i >= pos; i--) {
a[i] = a[i - 1];
}
a[pos - 1] = value;
printf("New array: ");
for (i = 0; i <= n; i++) {
printf("%d ", a[i]);
}
return 0;
}
*/
