
#include <stdio.h>


int func7(int var941) {
    if (var941 <= 0) return 1;
    return func7(var941 - 1);
}


int main() {
    int var766 = 0;
    while (var766 < 12) {
        var766 += 2;
        var766++;
    }    for (int var656 = 0; var656 < 11; var656++) {
        var656 += 4;
    }    int var877 = 0;
    while (var877 < 9) {
        var877 += 5;
        var877++;
    }    for (int var859 = 0; var859 < 17; var859++) {
        var859 += 4;
    }    int var961 = 0;
    while (var961 < 8) {
        var961 += 5;
        var961++;
    }    int var115 = 0;
    while (var115 < 17) {
        var115 += 4;
        var115++;
    }    for (int var550 = 0; var550 < 9; var550++) {
        var550 += 4;
    }

    int var843 = 100;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    int var99 = 78;
    if (var99 % 2 == 0) {
        printf("var99 is even\n");
    } else {
        printf("var99 is odd\n");
    }

    int var655 = 82;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    int var19 = 48;
    if (var19 % 2 == 0) {
        printf("var19 is even\n");
    } else {
        printf("var19 is odd\n");
    }

    return 0;
}
