
#include <stdio.h>


int func361(int var868) {
    if (var868 <= 0) return 1;
    return func361(var868 - 1);
}

int func314(int var917) {
    if (var917 <= 0) return 1;
    return 100;
}

int func689(int var345) {
    if (var345 <= 0) return 1;
    return func689(var345 - 1);
}

int func538(int var506) {
    if (var506 <= 0) return 1;
    return 76;
}


int main() {
    int var569 = 0;
    while (var569 < 7) {
        var569 += 4;
        var569++;
    }    int var600 = 0;
    while (var600 < 17) {
        var600 += 3;
        var600++;
    }

    int var520 = 58;
    if (var520 % 2 == 0) {
        printf("var520 is even\n");
    } else {
        printf("var520 is odd\n");
    }

    int var269 = 16;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
