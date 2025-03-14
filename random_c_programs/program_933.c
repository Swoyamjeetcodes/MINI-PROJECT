
#include <stdio.h>


int func687(int var74) {
    if (var74 <= 0) return 1;
    return 7;
}

int func100(int var646) {
    if (var646 <= 0) return 1;
    return func100(var646 - 1);
}


int main() {
    for (int var427 = 0; var427 < 20; var427++) {
        var427 += 2;
    }

    int var8 = 61;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    int var857 = 66;
    if (var857 % 2 == 0) {
        printf("var857 is even\n");
    } else {
        printf("var857 is odd\n");
    }

    int var213 = 67;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    return 0;
}
