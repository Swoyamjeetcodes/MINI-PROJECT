
#include <stdio.h>


int func576(int var923) {
    if (var923 <= 0) return 1;
    return func576(var923 - 1);
}

int func911(int var613) {
    if (var613 <= 0) return 1;
    return func911(var613 - 1);
}

int func734(int var446) {
    if (var446 <= 0) return 1;
    return 61;
}

int func765(int var45) {
    if (var45 <= 0) return 1;
    return func765(var45 - 1);
}


int main() {
    for (int var496 = 0; var496 < 8; var496++) {
        var496 += 2;
    }    int var147 = 0;
    while (var147 < 13) {
        var147 += 1;
        var147++;
    }    for (int var455 = 0; var455 < 16; var455++) {
        var455 += 2;
    }

    int var422 = 70;
    if (var422 % 2 == 0) {
        printf("var422 is even\n");
    } else {
        printf("var422 is odd\n");
    }

    return 0;
}
