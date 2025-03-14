
#include <stdio.h>


int func136(int var122) {
    if (var122 <= 0) return 1;
    return func136(var122 - 1);
}


int main() {
    int var29 = 0;
    while (var29 < 17) {
        var29 += 2;
        var29++;
    }    for (int var921 = 0; var921 < 12; var921++) {
        var921 += 2;
    }

    int var59 = 31;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    int var650 = 12;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    int var672 = 21;
    if (var672 % 2 == 0) {
        printf("var672 is even\n");
    } else {
        printf("var672 is odd\n");
    }

    return 0;
}
