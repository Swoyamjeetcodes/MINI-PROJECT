
#include <stdio.h>


int func630(int var474) {
    if (var474 <= 0) return 1;
    return func630(var474 - 1);
}

int func683(int var738) {
    if (var738 <= 0) return 1;
    return func683(var738 - 1);
}

int func414(int var812) {
    if (var812 <= 0) return 1;
    return func414(var812 - 1);
}


int main() {
    for (int var235 = 0; var235 < 5; var235++) {
        var235 += 3;
    }

    int var935 = 47;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    int var547 = 90;
    if (var547 % 2 == 0) {
        printf("var547 is even\n");
    } else {
        printf("var547 is odd\n");
    }

    return 0;
}
