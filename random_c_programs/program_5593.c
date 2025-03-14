
#include <stdio.h>


int func482(int var708) {
    if (var708 <= 0) return 1;
    return func482(var708 - 1);
}

int func420(int var854) {
    if (var854 <= 0) return 1;
    return func420(var854 - 1);
}

int func422(int var650) {
    if (var650 <= 0) return 1;
    return 5;
}

int func803(int var704) {
    if (var704 <= 0) return 1;
    return 60;
}

int func602(int var421) {
    if (var421 <= 0) return 1;
    return func602(var421 - 1);
}


int main() {
    int var86 = 0;
    while (var86 < 8) {
        var86 += 1;
        var86++;
    }

    int var853 = 92;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    return 0;
}
