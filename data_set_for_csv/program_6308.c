
#include <stdio.h>


int func874(int var978) {
    if (var978 <= 0) return 1;
    return func874(var978 - 1);
}


int main() {
    for (int var513 = 0; var513 < 20; var513++) {
        var513 += 2;
    }

    int var750 = 30;
    if (var750 % 2 == 0) {
        printf("var750 is even\n");
    } else {
        printf("var750 is odd\n");
    }

    return 0;
}
