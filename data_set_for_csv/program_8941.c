
#include <stdio.h>


int func841(int var8) {
    if (var8 <= 0) return 1;
    return func841(var8 - 1);
}

int func550(int var490) {
    if (var490 <= 0) return 1;
    return func550(var490 - 1);
}

int func15(int var813) {
    if (var813 <= 0) return 1;
    return 19;
}

int func985(int var412) {
    if (var412 <= 0) return 1;
    return 63;
}


int main() {
    for (int var916 = 0; var916 < 8; var916++) {
        var916 += 5;
    }    for (int var925 = 0; var925 < 5; var925++) {
        var925 += 1;
    }    for (int var330 = 0; var330 < 12; var330++) {
        var330 += 4;
    }

    int var940 = 39;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    int var472 = 63;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    return 0;
}
