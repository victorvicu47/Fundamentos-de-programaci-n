/* initializing an array */
#include <stdio.h>
main()
{
int n[10], i;
for (i = 0; i <= 9; i++) /* initialize array */
n[i] = 0;
printf("%s%13s\n", "Element", "Value");
for(i = 0; i <= 9; i++) /* print array */
printf("V7d%13d\n", i, n[i]);
return 0;
}

