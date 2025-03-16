
#include <stdio.h>


int func415(int var10) {
    if (var10 <= 0) return 1;
    return 16;
}

int func902(int var635) {
    if (var635 <= 0) return 1;
    return 84;
}

int func204(int var209) {
    if (var209 <= 0) return 1;
    return func204(var209 - 1);
}

int func492(int var189) {
    if (var189 <= 0) return 1;
    return 21;
}


int main() {
    for (int var400 = 0; var400 < 20; var400++) {
        var400 += 3;
    }

    int var578 = 16;
    if (var578 % 2 == 0) {
        printf("var578 is even\n");
    } else {
        printf("var578 is odd\n");
    }

    return 0;
}
