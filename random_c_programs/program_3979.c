
#include <stdio.h>


int func859(int var5) {
    if (var5 <= 0) return 1;
    return func859(var5 - 1);
}

int func84(int var122) {
    if (var122 <= 0) return 1;
    return func84(var122 - 1);
}


int main() {
    int var393 = 0;
    while (var393 < 20) {
        var393 += 2;
        var393++;
    }

    int var4 = 51;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    int var605 = 91;
    if (var605 % 2 == 0) {
        printf("var605 is even\n");
    } else {
        printf("var605 is odd\n");
    }

    int var696 = 59;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
