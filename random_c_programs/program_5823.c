
#include <stdio.h>


int func514(int var149) {
    if (var149 <= 0) return 1;
    return 40;
}

int func282(int var475) {
    if (var475 <= 0) return 1;
    return func282(var475 - 1);
}

int func679(int var76) {
    if (var76 <= 0) return 1;
    return func679(var76 - 1);
}


int main() {
    for (int var205 = 0; var205 < 17; var205++) {
        var205 += 2;
    }    for (int var552 = 0; var552 < 6; var552++) {
        var552 += 4;
    }    int var718 = 0;
    while (var718 < 13) {
        var718 += 2;
        var718++;
    }

    int var312 = 44;
    if (var312 % 2 == 0) {
        printf("var312 is even\n");
    } else {
        printf("var312 is odd\n");
    }

    int var925 = 26;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
