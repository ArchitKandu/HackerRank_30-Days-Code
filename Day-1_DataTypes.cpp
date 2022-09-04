#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j;
    double e;
    char ch[1000];
    scanf("%d",&j);
    scanf("%lf",&e);
    scanf("%*[\n] %[^\n]",ch);
    printf("%d\n%.1f\n%s%s",i+j,d+e,s,ch);
    return 0;
}
