
#include <stdio.h>


int func830(int var901) {
    if (var901 <= 0) return 1;
    return func830(var901 - 1);
}

int func95(int var168) {
    if (var168 <= 0) return 1;
    return func95(var168 - 1);
}

int func136(int var509) {
    if (var509 <= 0) return 1;
    return func136(var509 - 1);
}

int func615(int var329) {
    if (var329 <= 0) return 1;
    return 44;
}

int func182(int var456) {
    if (var456 <= 0) return 1;
    return 84;
}


int main() {
    for (int var112 = 0; var112 < 19; var112++) {
        var112 += 1;
    }    for (int var961 = 0; var961 < 18; var961++) {
        var961 += 4;
    }

    int var106 = 48;
    if (var106 % 2 == 0) {
        printf("var106 is even\n");
    } else {
        printf("var106 is odd\n");
    }

    int var459 = 80;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    int var305 = 98;
    if (var305 % 2 == 0) {
        printf("var305 is even\n");
    } else {
        printf("var305 is odd\n");
    }

    return 0;
}
