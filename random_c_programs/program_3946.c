
#include <stdio.h>


int func785(int var856) {
    if (var856 <= 0) return 1;
    return func785(var856 - 1);
}

int func181(int var585) {
    if (var585 <= 0) return 1;
    return 21;
}


int main() {
    for (int var550 = 0; var550 < 17; var550++) {
        var550 += 5;
    }    for (int var562 = 0; var562 < 10; var562++) {
        var562 += 2;
    }

    int var589 = 99;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
