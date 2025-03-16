
#include <stdio.h>


int func961(int var724) {
    if (var724 <= 0) return 1;
    return func961(var724 - 1);
}

int func692(int var853) {
    if (var853 <= 0) return 1;
    return func692(var853 - 1);
}

int func884(int var847) {
    if (var847 <= 0) return 1;
    return func884(var847 - 1);
}

int func240(int var216) {
    if (var216 <= 0) return 1;
    return 12;
}

int func536(int var94) {
    if (var94 <= 0) return 1;
    return 19;
}


int main() {
    for (int var938 = 0; var938 < 5; var938++) {
        var938 += 3;
    }    int var659 = 0;
    while (var659 < 9) {
        var659 += 2;
        var659++;
    }

    int var213 = 10;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    return 0;
}
