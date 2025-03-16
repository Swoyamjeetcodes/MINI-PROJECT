
#include <stdio.h>


int func171(int var180) {
    if (var180 <= 0) return 1;
    return func171(var180 - 1);
}

int func921(int var375) {
    if (var375 <= 0) return 1;
    return 53;
}

int func225(int var882) {
    if (var882 <= 0) return 1;
    return 37;
}


int main() {
    for (int var986 = 0; var986 < 9; var986++) {
        var986 += 5;
    }    for (int var649 = 0; var649 < 16; var649++) {
        var649 += 3;
    }    int var416 = 0;
    while (var416 < 6) {
        var416 += 2;
        var416++;
    }    for (int var471 = 0; var471 < 7; var471++) {
        var471 += 3;
    }    for (int var939 = 0; var939 < 12; var939++) {
        var939 += 4;
    }    for (int var344 = 0; var344 < 17; var344++) {
        var344 += 2;
    }

    int var482 = 15;
    if (var482 % 2 == 0) {
        printf("var482 is even\n");
    } else {
        printf("var482 is odd\n");
    }

    return 0;
}
