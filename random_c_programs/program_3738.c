
#include <stdio.h>


int func812(int var791) {
    if (var791 <= 0) return 1;
    return func812(var791 - 1);
}

int func939(int var264) {
    if (var264 <= 0) return 1;
    return 3;
}


int main() {
    int var884 = 0;
    while (var884 < 16) {
        var884 += 5;
        var884++;
    }    int var355 = 0;
    while (var355 < 15) {
        var355 += 2;
        var355++;
    }    int var789 = 0;
    while (var789 < 15) {
        var789 += 1;
        var789++;
    }

    int var935 = 0;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
