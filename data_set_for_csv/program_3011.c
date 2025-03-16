
#include <stdio.h>


int func432(int var656) {
    if (var656 <= 0) return 1;
    return 12;
}

int func470(int var574) {
    if (var574 <= 0) return 1;
    return 27;
}

int func423(int var836) {
    if (var836 <= 0) return 1;
    return func423(var836 - 1);
}

int func523(int var575) {
    if (var575 <= 0) return 1;
    return func523(var575 - 1);
}


int main() {
    for (int var638 = 0; var638 < 15; var638++) {
        var638 += 3;
    }

    int var104 = 73;
    if (var104 % 2 == 0) {
        printf("var104 is even\n");
    } else {
        printf("var104 is odd\n");
    }

    int var917 = 80;
    if (var917 % 2 == 0) {
        printf("var917 is even\n");
    } else {
        printf("var917 is odd\n");
    }

    return 0;
}
