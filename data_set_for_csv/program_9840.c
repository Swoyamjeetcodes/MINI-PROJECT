
#include <stdio.h>


int func203(int var176) {
    if (var176 <= 0) return 1;
    return func203(var176 - 1);
}

int func634(int var875) {
    if (var875 <= 0) return 1;
    return 43;
}

int func11(int var36) {
    if (var36 <= 0) return 1;
    return func11(var36 - 1);
}

int func76(int var644) {
    if (var644 <= 0) return 1;
    return func76(var644 - 1);
}


int main() {
    int var256 = 0;
    while (var256 < 12) {
        var256 += 1;
        var256++;
    }    int var986 = 0;
    while (var986 < 7) {
        var986 += 3;
        var986++;
    }

    int var410 = 38;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    return 0;
}
