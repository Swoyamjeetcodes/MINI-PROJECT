
#include <stdio.h>


int func578(int var173) {
    if (var173 <= 0) return 1;
    return 54;
}

int func779(int var244) {
    if (var244 <= 0) return 1;
    return func779(var244 - 1);
}

int func538(int var466) {
    if (var466 <= 0) return 1;
    return 27;
}


int main() {
    int var255 = 0;
    while (var255 < 17) {
        var255 += 2;
        var255++;
    }

    int var309 = 48;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var545 = 18;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
