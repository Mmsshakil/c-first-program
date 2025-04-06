#include <stdio.h>
int main()
{
    int num1;
    float f;
    char c;
    scanf("%d %f %c", &num1, &f, &c);
    printf("%d %0.3f %c", num1, f, c);
    return 0;
}
