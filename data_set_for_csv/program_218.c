
#include <stdio.h>


int func415(int var753) {
    if (var753 <= 0) return 1;
    return func415(var753 - 1);
}

int func600(int var416) {
    if (var416 <= 0) return 1;
    return 70;
}


int main() {
    int var450 = 0;
    while (var450 < 5) {
        var450 += 3;
        var450++;
    }

    int var925 = 41;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    int var279 = 21;
    if (var279 % 2 == 0) {
        printf("var279 is even\n");
    } else {
        printf("var279 is odd\n");
    }

    int var137 = 18;
    if (var137 % 2 == 0) {
        printf("var137 is even\n");
    } else {
        printf("var137 is odd\n");
    }

    return 0;
}
