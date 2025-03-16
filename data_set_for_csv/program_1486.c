
#include <stdio.h>


int func739(int var939) {
    if (var939 <= 0) return 1;
    return func739(var939 - 1);
}

int func11(int var698) {
    if (var698 <= 0) return 1;
    return 30;
}

int func284(int var200) {
    if (var200 <= 0) return 1;
    return 34;
}


int main() {
    int var553 = 0;
    while (var553 < 7) {
        var553 += 2;
        var553++;
    }

    int var509 = 45;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    return 0;
}
