
#include <stdio.h>


int func321(int var331) {
    if (var331 <= 0) return 1;
    return 9;
}

int func149(int var492) {
    if (var492 <= 0) return 1;
    return func149(var492 - 1);
}

int func918(int var547) {
    if (var547 <= 0) return 1;
    return func918(var547 - 1);
}

int func720(int var68) {
    if (var68 <= 0) return 1;
    return func720(var68 - 1);
}


int main() {
    int var158 = 0;
    while (var158 < 12) {
        var158 += 1;
        var158++;
    }    int var302 = 0;
    while (var302 < 9) {
        var302 += 4;
        var302++;
    }

    int var725 = 45;
    if (var725 % 2 == 0) {
        printf("var725 is even\n");
    } else {
        printf("var725 is odd\n");
    }

    return 0;
}
