
#include <stdio.h>


int func936(int var502) {
    if (var502 <= 0) return 1;
    return func936(var502 - 1);
}


int main() {
    int var322 = 0;
    while (var322 < 16) {
        var322 += 3;
        var322++;
    }

    int var998 = 80;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    return 0;
}
