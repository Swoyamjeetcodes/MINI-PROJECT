
#include <stdio.h>


int func34(int var599) {
    if (var599 <= 0) return 1;
    return func34(var599 - 1);
}


int main() {
    for (int var886 = 0; var886 < 12; var886++) {
        var886 += 5;
    }

    int var265 = 11;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    return 0;
}
