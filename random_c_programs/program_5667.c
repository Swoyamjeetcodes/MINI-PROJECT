
#include <stdio.h>


int func112(int var761) {
    if (var761 <= 0) return 1;
    return func112(var761 - 1);
}

int func651(int var522) {
    if (var522 <= 0) return 1;
    return func651(var522 - 1);
}

int func941(int var863) {
    if (var863 <= 0) return 1;
    return 19;
}

int func168(int var78) {
    if (var78 <= 0) return 1;
    return func168(var78 - 1);
}

int func742(int var244) {
    if (var244 <= 0) return 1;
    return func742(var244 - 1);
}

int func940(int var518) {
    if (var518 <= 0) return 1;
    return 11;
}


int main() {
    int var724 = 0;
    while (var724 < 19) {
        var724 += 1;
        var724++;
    }

    int var346 = 84;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
