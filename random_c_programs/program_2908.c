
#include <stdio.h>


int func155(int var302) {
    if (var302 <= 0) return 1;
    return func155(var302 - 1);
}

int func862(int var605) {
    if (var605 <= 0) return 1;
    return 10;
}

int func171(int var621) {
    if (var621 <= 0) return 1;
    return 15;
}


int main() {
    for (int var691 = 0; var691 < 12; var691++) {
        var691 += 2;
    }    for (int var250 = 0; var250 < 18; var250++) {
        var250 += 4;
    }    for (int var859 = 0; var859 < 11; var859++) {
        var859 += 2;
    }    for (int var898 = 0; var898 < 6; var898++) {
        var898 += 2;
    }    for (int var311 = 0; var311 < 10; var311++) {
        var311 += 3;
    }    for (int var187 = 0; var187 < 16; var187++) {
        var187 += 4;
    }

    int var393 = 11;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    return 0;
}
