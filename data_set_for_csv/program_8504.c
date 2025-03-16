
#include <stdio.h>


int func142(int var911) {
    if (var911 <= 0) return 1;
    return 57;
}

int func348(int var669) {
    if (var669 <= 0) return 1;
    return func348(var669 - 1);
}

int func322(int var635) {
    if (var635 <= 0) return 1;
    return func322(var635 - 1);
}

int func713(int var111) {
    if (var111 <= 0) return 1;
    return 16;
}

int func535(int var820) {
    if (var820 <= 0) return 1;
    return 35;
}


int main() {
    int var20 = 0;
    while (var20 < 19) {
        var20 += 3;
        var20++;
    }

    int var113 = 39;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
