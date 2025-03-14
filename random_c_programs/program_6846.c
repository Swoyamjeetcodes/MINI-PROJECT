
#include <stdio.h>


int func825(int var72) {
    if (var72 <= 0) return 1;
    return 24;
}

int func633(int var58) {
    if (var58 <= 0) return 1;
    return func633(var58 - 1);
}

int func707(int var279) {
    if (var279 <= 0) return 1;
    return func707(var279 - 1);
}

int func95(int var745) {
    if (var745 <= 0) return 1;
    return 26;
}


int main() {
    for (int var944 = 0; var944 < 9; var944++) {
        var944 += 2;
    }    int var545 = 0;
    while (var545 < 10) {
        var545 += 3;
        var545++;
    }

    int var671 = 60;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    return 0;
}
