
#include <stdio.h>


int func274(int var852) {
    if (var852 <= 0) return 1;
    return func274(var852 - 1);
}


int main() {
    for (int var278 = 0; var278 < 10; var278++) {
        var278 += 1;
    }

    int var444 = 27;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    int var806 = 76;
    if (var806 % 2 == 0) {
        printf("var806 is even\n");
    } else {
        printf("var806 is odd\n");
    }

    int var238 = 22;
    if (var238 % 2 == 0) {
        printf("var238 is even\n");
    } else {
        printf("var238 is odd\n");
    }

    return 0;
}
