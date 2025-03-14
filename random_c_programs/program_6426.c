
#include <stdio.h>


int func570(int var367) {
    if (var367 <= 0) return 1;
    return 84;
}

int func58(int var514) {
    if (var514 <= 0) return 1;
    return func58(var514 - 1);
}


int main() {
    int var349 = 0;
    while (var349 < 8) {
        var349 += 3;
        var349++;
    }    int var985 = 0;
    while (var985 < 13) {
        var985 += 3;
        var985++;
    }    for (int var548 = 0; var548 < 9; var548++) {
        var548 += 4;
    }

    int var668 = 85;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    int var274 = 39;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
