
#include <stdio.h>


int func766(int var822) {
    if (var822 <= 0) return 1;
    return func766(var822 - 1);
}

int func543(int var940) {
    if (var940 <= 0) return 1;
    return func543(var940 - 1);
}

int func874(int var872) {
    if (var872 <= 0) return 1;
    return 89;
}

int func76(int var657) {
    if (var657 <= 0) return 1;
    return 63;
}


int main() {
    for (int var179 = 0; var179 < 16; var179++) {
        var179 += 1;
    }    for (int var181 = 0; var181 < 15; var181++) {
        var181 += 5;
    }    int var304 = 0;
    while (var304 < 18) {
        var304 += 2;
        var304++;
    }

    int var529 = 2;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    return 0;
}
