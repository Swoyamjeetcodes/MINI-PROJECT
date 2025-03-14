
#include <stdio.h>


int func100(int var314) {
    if (var314 <= 0) return 1;
    return func100(var314 - 1);
}


int main() {
    for (int var937 = 0; var937 < 9; var937++) {
        var937 += 2;
    }    for (int var542 = 0; var542 < 12; var542++) {
        var542 += 4;
    }    int var775 = 0;
    while (var775 < 10) {
        var775 += 5;
        var775++;
    }

    int var549 = 67;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    return 0;
}
