/*
#include <stdio.h>
int main() {
int num, i, originalNum, rem, sum = 0;
printf("Enter a number: ");
scanf("%d", &num);
originalNum = num;
while (originalNum != 0) {
rem = originalNum % 10;
sum += rem * rem * rem;
originalNum /= 10;
}
if (sum == num)
printf("%d is an Armstrong number.", num);
else
printf("%d is not an Armstrong number.", num);
return 0;
}
*/
