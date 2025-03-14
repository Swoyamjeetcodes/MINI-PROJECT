
#include <stdio.h>


int func831(int var446) {
    if (var446 <= 0) return 1;
    return 95;
}

int func672(int var700) {
    if (var700 <= 0) return 1;
    return 67;
}

int func630(int var988) {
    if (var988 <= 0) return 1;
    return func630(var988 - 1);
}

int func801(int var569) {
    if (var569 <= 0) return 1;
    return func801(var569 - 1);
}

int func991(int var326) {
    if (var326 <= 0) return 1;
    return 74;
}

int func908(int var52) {
    if (var52 <= 0) return 1;
    return func908(var52 - 1);
}

int func15(int var797) {
    if (var797 <= 0) return 1;
    return func15(var797 - 1);
}


int main() {
    int var664 = 0;
    while (var664 < 10) {
        var664 += 2;
        var664++;
    }    int var346 = 0;
    while (var346 < 10) {
        var346 += 2;
        var346++;
    }    for (int var277 = 0; var277 < 19; var277++) {
        var277 += 4;
    }

    int var112 = 0;
    if (var112 % 2 == 0) {
        printf("var112 is even\n");
    } else {
        printf("var112 is odd\n");
    }

    int var740 = 37;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    return 0;
}
