
#include <stdio.h>


int func598(int var722) {
    if (var722 <= 0) return 1;
    return 82;
}

int func400(int var403) {
    if (var403 <= 0) return 1;
    return 69;
}

int func152(int var391) {
    if (var391 <= 0) return 1;
    return func152(var391 - 1);
}

int func27(int var695) {
    if (var695 <= 0) return 1;
    return func27(var695 - 1);
}

int func313(int var227) {
    if (var227 <= 0) return 1;
    return func313(var227 - 1);
}


int main() {
    int var868 = 0;
    while (var868 < 20) {
        var868 += 2;
        var868++;
    }    for (int var367 = 0; var367 < 9; var367++) {
        var367 += 2;
    }

    int var109 = 38;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    int var459 = 29;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    return 0;
}
