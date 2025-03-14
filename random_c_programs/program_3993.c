
#include <stdio.h>


int func376(int var70) {
    if (var70 <= 0) return 1;
    return func376(var70 - 1);
}

int func267(int var303) {
    if (var303 <= 0) return 1;
    return func267(var303 - 1);
}


int main() {
    int var123 = 0;
    while (var123 < 6) {
        var123 += 5;
        var123++;
    }

    int var677 = 28;
    if (var677 % 2 == 0) {
        printf("var677 is even\n");
    } else {
        printf("var677 is odd\n");
    }

    return 0;
}
