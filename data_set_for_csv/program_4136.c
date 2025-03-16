
#include <stdio.h>


int func258(int var130) {
    if (var130 <= 0) return 1;
    return func258(var130 - 1);
}

int func192(int var30) {
    if (var30 <= 0) return 1;
    return func192(var30 - 1);
}

int func268(int var667) {
    if (var667 <= 0) return 1;
    return func268(var667 - 1);
}

int func226(int var461) {
    if (var461 <= 0) return 1;
    return func226(var461 - 1);
}

int func449(int var441) {
    if (var441 <= 0) return 1;
    return 19;
}


int main() {
    for (int var996 = 0; var996 < 19; var996++) {
        var996 += 3;
    }

    int var885 = 85;
    if (var885 % 2 == 0) {
        printf("var885 is even\n");
    } else {
        printf("var885 is odd\n");
    }

    return 0;
}
