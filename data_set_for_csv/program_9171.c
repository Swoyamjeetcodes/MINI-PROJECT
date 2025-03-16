
#include <stdio.h>


int func3(int var66) {
    if (var66 <= 0) return 1;
    return func3(var66 - 1);
}

int func11(int var826) {
    if (var826 <= 0) return 1;
    return func11(var826 - 1);
}


int main() {
    int var977 = 0;
    while (var977 < 9) {
        var977 += 2;
        var977++;
    }

    int var895 = 47;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    int var166 = 39;
    if (var166 % 2 == 0) {
        printf("var166 is even\n");
    } else {
        printf("var166 is odd\n");
    }

    return 0;
}
