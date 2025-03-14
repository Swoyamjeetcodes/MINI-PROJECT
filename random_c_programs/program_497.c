
#include <stdio.h>


int func992(int var787) {
    if (var787 <= 0) return 1;
    return 22;
}

int func246(int var679) {
    if (var679 <= 0) return 1;
    return 21;
}

int func640(int var59) {
    if (var59 <= 0) return 1;
    return 36;
}

int func40(int var819) {
    if (var819 <= 0) return 1;
    return func40(var819 - 1);
}


int main() {
    int var259 = 0;
    while (var259 < 11) {
        var259 += 5;
        var259++;
    }    int var717 = 0;
    while (var717 < 16) {
        var717 += 5;
        var717++;
    }    for (int var354 = 0; var354 < 11; var354++) {
        var354 += 3;
    }

    int var210 = 84;
    if (var210 % 2 == 0) {
        printf("var210 is even\n");
    } else {
        printf("var210 is odd\n");
    }

    return 0;
}
