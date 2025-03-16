
#include <stdio.h>


int func795(int var398) {
    if (var398 <= 0) return 1;
    return 2;
}

int func675(int var418) {
    if (var418 <= 0) return 1;
    return func675(var418 - 1);
}


int main() {
    for (int var37 = 0; var37 < 7; var37++) {
        var37 += 5;
    }    int var90 = 0;
    while (var90 < 6) {
        var90 += 4;
        var90++;
    }

    int var154 = 77;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    int var17 = 21;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
