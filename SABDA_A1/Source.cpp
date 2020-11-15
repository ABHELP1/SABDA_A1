#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

#include <stdio.h>
void n(int n);
int o;
int a[101] = { 0 };
int* p = a;
int main() {
    a[0] = 1;
    for (int i = 6; i < 101; i++) {
        if (*(p+i - 6) == 1) *(p+i) = 1;
        if (i >= 9) if (*(p+i - 9 )== 1) *(p + i) = 1;
        if (i >= 20) if (*(p+i - 20) == 1) *(p+i) = 1;
    }
    scanf("%d", &o);
   n(o);

}
void n(int n) {
    if (n <= 5) printf("no");
    else for (int i = 1; i <= n; i++) if (a[i] == 1) printf("%d\n", i);
}