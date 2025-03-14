
#include <stdio.h>


int func801(int var425) {
    if (var425 <= 0) return 1;
    return func801(var425 - 1);
}


int main() {
    int var770 = 0;
    while (var770 < 7) {
        var770 += 4;
        var770++;
    }

    int var978 = 30;
    if (var978 % 2 == 0) {
        printf("var978 is even\n");
    } else {
        printf("var978 is odd\n");
    }

    int var192 = 19;
    if (var192 % 2 == 0) {
        printf("var192 is even\n");
    } else {
        printf("var192 is odd\n");
    }

    int var225 = 14;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
