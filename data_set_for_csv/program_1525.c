
#include <stdio.h>


int func997(int var851) {
    if (var851 <= 0) return 1;
    return func997(var851 - 1);
}

int func520(int var114) {
    if (var114 <= 0) return 1;
    return func520(var114 - 1);
}

int func524(int var461) {
    if (var461 <= 0) return 1;
    return func524(var461 - 1);
}


int main() {
    for (int var907 = 0; var907 < 16; var907++) {
        var907 += 2;
    }    for (int var175 = 0; var175 < 18; var175++) {
        var175 += 1;
    }

    int var57 = 23;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var28 = 44;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    int var779 = 72;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    return 0;
}
