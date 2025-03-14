
#include <stdio.h>


int func283(int var721) {
    if (var721 <= 0) return 1;
    return func283(var721 - 1);
}

int func66(int var899) {
    if (var899 <= 0) return 1;
    return 10;
}


int main() {
    for (int var3 = 0; var3 < 20; var3++) {
        var3 += 5;
    }    int var105 = 0;
    while (var105 < 16) {
        var105 += 4;
        var105++;
    }    int var150 = 0;
    while (var150 < 18) {
        var150 += 3;
        var150++;
    }    for (int var508 = 0; var508 < 5; var508++) {
        var508 += 2;
    }    int var338 = 0;
    while (var338 < 9) {
        var338 += 1;
        var338++;
    }    int var535 = 0;
    while (var535 < 7) {
        var535 += 5;
        var535++;
    }

    int var769 = 95;
    if (var769 % 2 == 0) {
        printf("var769 is even\n");
    } else {
        printf("var769 is odd\n");
    }

    return 0;
}
