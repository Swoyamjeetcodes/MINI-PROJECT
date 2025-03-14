
#include <stdio.h>


int func612(int var831) {
    if (var831 <= 0) return 1;
    return func612(var831 - 1);
}

int func69(int var738) {
    if (var738 <= 0) return 1;
    return func69(var738 - 1);
}

int func642(int var926) {
    if (var926 <= 0) return 1;
    return func642(var926 - 1);
}

int func231(int var318) {
    if (var318 <= 0) return 1;
    return 57;
}


int main() {
    int var252 = 0;
    while (var252 < 15) {
        var252 += 5;
        var252++;
    }    for (int var659 = 0; var659 < 12; var659++) {
        var659 += 3;
    }

    int var140 = 50;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var650 = 7;
    if (var650 % 2 == 0) {
        printf("var650 is even\n");
    } else {
        printf("var650 is odd\n");
    }

    return 0;
}
