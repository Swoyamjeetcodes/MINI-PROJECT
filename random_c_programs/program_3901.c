
#include <stdio.h>


int func628(int var537) {
    if (var537 <= 0) return 1;
    return 73;
}

int func421(int var579) {
    if (var579 <= 0) return 1;
    return func421(var579 - 1);
}

int func283(int var214) {
    if (var214 <= 0) return 1;
    return func283(var214 - 1);
}

int func780(int var768) {
    if (var768 <= 0) return 1;
    return func780(var768 - 1);
}


int main() {
    for (int var721 = 0; var721 < 16; var721++) {
        var721 += 1;
    }    for (int var900 = 0; var900 < 15; var900++) {
        var900 += 3;
    }    int var613 = 0;
    while (var613 < 10) {
        var613 += 5;
        var613++;
    }

    int var964 = 71;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var321 = 12;
    if (var321 % 2 == 0) {
        printf("var321 is even\n");
    } else {
        printf("var321 is odd\n");
    }

    return 0;
}
