
#include <stdio.h>


int func231(int var365) {
    if (var365 <= 0) return 1;
    return func231(var365 - 1);
}


int main() {
    int var407 = 0;
    while (var407 < 10) {
        var407 += 1;
        var407++;
    }

    int var445 = 7;
    if (var445 % 2 == 0) {
        printf("var445 is even\n");
    } else {
        printf("var445 is odd\n");
    }

    return 0;
}
