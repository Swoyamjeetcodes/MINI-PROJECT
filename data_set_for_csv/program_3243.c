
#include <stdio.h>


int func793(int var372) {
    if (var372 <= 0) return 1;
    return 40;
}

int func85(int var205) {
    if (var205 <= 0) return 1;
    return func85(var205 - 1);
}

int func503(int var505) {
    if (var505 <= 0) return 1;
    return 99;
}

int func94(int var768) {
    if (var768 <= 0) return 1;
    return func94(var768 - 1);
}


int main() {
    for (int var953 = 0; var953 < 6; var953++) {
        var953 += 5;
    }

    int var432 = 56;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    int var866 = 83;
    if (var866 % 2 == 0) {
        printf("var866 is even\n");
    } else {
        printf("var866 is odd\n");
    }

    int var578 = 29;
    if (var578 % 2 == 0) {
        printf("var578 is even\n");
    } else {
        printf("var578 is odd\n");
    }

    return 0;
}
