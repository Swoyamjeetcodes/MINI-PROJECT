
#include <stdio.h>


int func861(int var94) {
    if (var94 <= 0) return 1;
    return func861(var94 - 1);
}

int func448(int var87) {
    if (var87 <= 0) return 1;
    return func448(var87 - 1);
}

int func641(int var490) {
    if (var490 <= 0) return 1;
    return func641(var490 - 1);
}

int func791(int var863) {
    if (var863 <= 0) return 1;
    return func791(var863 - 1);
}

int func865(int var502) {
    if (var502 <= 0) return 1;
    return func865(var502 - 1);
}


int main() {
    int var400 = 0;
    while (var400 < 6) {
        var400 += 3;
        var400++;
    }

    int var329 = 51;
    if (var329 % 2 == 0) {
        printf("var329 is even\n");
    } else {
        printf("var329 is odd\n");
    }

    return 0;
}
