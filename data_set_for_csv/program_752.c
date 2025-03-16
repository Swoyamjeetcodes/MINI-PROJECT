
#include <stdio.h>


int func865(int var14) {
    if (var14 <= 0) return 1;
    return func865(var14 - 1);
}

int func450(int var861) {
    if (var861 <= 0) return 1;
    return 36;
}

int func730(int var926) {
    if (var926 <= 0) return 1;
    return 45;
}


int main() {
    for (int var904 = 0; var904 < 8; var904++) {
        var904 += 2;
    }    int var753 = 0;
    while (var753 < 16) {
        var753 += 3;
        var753++;
    }    for (int var416 = 0; var416 < 14; var416++) {
        var416 += 2;
    }

    int var255 = 75;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    return 0;
}
