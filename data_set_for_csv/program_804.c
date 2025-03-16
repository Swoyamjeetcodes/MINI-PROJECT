
#include <stdio.h>


int func3(int var312) {
    if (var312 <= 0) return 1;
    return func3(var312 - 1);
}

int func505(int var72) {
    if (var72 <= 0) return 1;
    return func505(var72 - 1);
}

int func186(int var465) {
    if (var465 <= 0) return 1;
    return func186(var465 - 1);
}


int main() {
    int var779 = 0;
    while (var779 < 8) {
        var779 += 4;
        var779++;
    }    for (int var737 = 0; var737 < 19; var737++) {
        var737 += 1;
    }

    int var94 = 27;
    if (var94 % 2 == 0) {
        printf("var94 is even\n");
    } else {
        printf("var94 is odd\n");
    }

    int var374 = 89;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var96 = 31;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
