
#include <stdio.h>


int func395(int var356) {
    if (var356 <= 0) return 1;
    return func395(var356 - 1);
}


int main() {
    for (int var995 = 0; var995 < 14; var995++) {
        var995 += 5;
    }

    int var309 = 86;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    return 0;
}
