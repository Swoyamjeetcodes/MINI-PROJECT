
#include <stdio.h>


int func438(int var519) {
    if (var519 <= 0) return 1;
    return func438(var519 - 1);
}

int func127(int var143) {
    if (var143 <= 0) return 1;
    return func127(var143 - 1);
}

int func770(int var488) {
    if (var488 <= 0) return 1;
    return func770(var488 - 1);
}


int main() {
    for (int var658 = 0; var658 < 20; var658++) {
        var658 += 4;
    }    int var660 = 0;
    while (var660 < 5) {
        var660 += 1;
        var660++;
    }    int var683 = 0;
    while (var683 < 12) {
        var683 += 5;
        var683++;
    }

    int var674 = 13;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
