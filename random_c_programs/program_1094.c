
#include <stdio.h>


int func371(int var679) {
    if (var679 <= 0) return 1;
    return 67;
}

int func755(int var452) {
    if (var452 <= 0) return 1;
    return 63;
}

int func789(int var968) {
    if (var968 <= 0) return 1;
    return 66;
}

int func848(int var293) {
    if (var293 <= 0) return 1;
    return 38;
}

int func327(int var541) {
    if (var541 <= 0) return 1;
    return func327(var541 - 1);
}

int func29(int var331) {
    if (var331 <= 0) return 1;
    return func29(var331 - 1);
}

int func924(int var888) {
    if (var888 <= 0) return 1;
    return func924(var888 - 1);
}


int main() {
    for (int var410 = 0; var410 < 9; var410++) {
        var410 += 4;
    }    for (int var828 = 0; var828 < 11; var828++) {
        var828 += 1;
    }    int var342 = 0;
    while (var342 < 7) {
        var342 += 4;
        var342++;
    }    int var34 = 0;
    while (var34 < 17) {
        var34 += 3;
        var34++;
    }    int var632 = 0;
    while (var632 < 18) {
        var632 += 5;
        var632++;
    }

    int var290 = 19;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}
