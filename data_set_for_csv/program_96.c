
#include <stdio.h>


int func497(int var755) {
    if (var755 <= 0) return 1;
    return func497(var755 - 1);
}


int main() {
    for (int var848 = 0; var848 < 8; var848++) {
        var848 += 1;
    }

    int var397 = 30;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
