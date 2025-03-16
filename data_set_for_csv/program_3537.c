
#include <stdio.h>


int func533(int var573) {
    if (var573 <= 0) return 1;
    return 42;
}

int func941(int var939) {
    if (var939 <= 0) return 1;
    return func941(var939 - 1);
}


int main() {
    int var513 = 0;
    while (var513 < 7) {
        var513 += 4;
        var513++;
    }    for (int var4 = 0; var4 < 20; var4++) {
        var4 += 5;
    }

    int var752 = 44;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var142 = 30;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    int var572 = 96;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    return 0;
}
