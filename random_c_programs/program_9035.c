
#include <stdio.h>


int func92(int var163) {
    if (var163 <= 0) return 1;
    return func92(var163 - 1);
}


int main() {
    int var1 = 0;
    while (var1 < 6) {
        var1 += 1;
        var1++;
    }    for (int var964 = 0; var964 < 16; var964++) {
        var964 += 3;
    }

    int var497 = 90;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    int var723 = 54;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    int var705 = 84;
    if (var705 % 2 == 0) {
        printf("var705 is even\n");
    } else {
        printf("var705 is odd\n");
    }

    return 0;
}
