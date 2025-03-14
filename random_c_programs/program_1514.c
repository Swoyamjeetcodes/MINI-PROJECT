
#include <stdio.h>


int func927(int var269) {
    if (var269 <= 0) return 1;
    return func927(var269 - 1);
}

int func674(int var305) {
    if (var305 <= 0) return 1;
    return 38;
}

int func423(int var275) {
    if (var275 <= 0) return 1;
    return func423(var275 - 1);
}

int func353(int var992) {
    if (var992 <= 0) return 1;
    return 53;
}

int func115(int var335) {
    if (var335 <= 0) return 1;
    return func115(var335 - 1);
}


int main() {
    for (int var528 = 0; var528 < 7; var528++) {
        var528 += 2;
    }    int var119 = 0;
    while (var119 < 6) {
        var119 += 1;
        var119++;
    }

    int var760 = 60;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var812 = 51;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    return 0;
}
