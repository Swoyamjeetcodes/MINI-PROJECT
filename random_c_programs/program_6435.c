
#include <stdio.h>


int func699(int var366) {
    if (var366 <= 0) return 1;
    return 50;
}

int func997(int var246) {
    if (var246 <= 0) return 1;
    return 96;
}

int func398(int var73) {
    if (var73 <= 0) return 1;
    return 67;
}

int func945(int var744) {
    if (var744 <= 0) return 1;
    return func945(var744 - 1);
}

int func674(int var114) {
    if (var114 <= 0) return 1;
    return func674(var114 - 1);
}


int main() {
    for (int var182 = 0; var182 < 5; var182++) {
        var182 += 2;
    }    for (int var398 = 0; var398 < 18; var398++) {
        var398 += 3;
    }    for (int var331 = 0; var331 < 11; var331++) {
        var331 += 3;
    }

    int var87 = 95;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    int var72 = 17;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    int var727 = 38;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    return 0;
}
