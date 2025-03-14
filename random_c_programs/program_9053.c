
#include <stdio.h>


int func380(int var474) {
    if (var474 <= 0) return 1;
    return func380(var474 - 1);
}

int func814(int var511) {
    if (var511 <= 0) return 1;
    return func814(var511 - 1);
}

int func638(int var742) {
    if (var742 <= 0) return 1;
    return 2;
}


int main() {
    int var779 = 0;
    while (var779 < 12) {
        var779 += 2;
        var779++;
    }

    int var836 = 85;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    int var793 = 77;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    int var543 = 81;
    if (var543 % 2 == 0) {
        printf("var543 is even\n");
    } else {
        printf("var543 is odd\n");
    }

    return 0;
}
