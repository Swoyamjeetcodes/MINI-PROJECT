
#include <stdio.h>


int func76(int var839) {
    if (var839 <= 0) return 1;
    return 62;
}

int func353(int var460) {
    if (var460 <= 0) return 1;
    return func353(var460 - 1);
}

int func760(int var552) {
    if (var552 <= 0) return 1;
    return func760(var552 - 1);
}

int func152(int var87) {
    if (var87 <= 0) return 1;
    return func152(var87 - 1);
}


int main() {
    int var474 = 0;
    while (var474 < 11) {
        var474 += 4;
        var474++;
    }    for (int var626 = 0; var626 < 8; var626++) {
        var626 += 5;
    }    int var478 = 0;
    while (var478 < 5) {
        var478 += 5;
        var478++;
    }

    int var531 = 63;
    if (var531 % 2 == 0) {
        printf("var531 is even\n");
    } else {
        printf("var531 is odd\n");
    }

    return 0;
}
