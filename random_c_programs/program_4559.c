
#include <stdio.h>


int func219(int var562) {
    if (var562 <= 0) return 1;
    return func219(var562 - 1);
}

int func453(int var308) {
    if (var308 <= 0) return 1;
    return func453(var308 - 1);
}

int func567(int var944) {
    if (var944 <= 0) return 1;
    return 44;
}

int func821(int var707) {
    if (var707 <= 0) return 1;
    return 97;
}


int main() {
    int var392 = 0;
    while (var392 < 19) {
        var392 += 3;
        var392++;
    }

    int var504 = 13;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    return 0;
}
