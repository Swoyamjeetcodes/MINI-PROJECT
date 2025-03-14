
#include <stdio.h>


int func257(int var436) {
    if (var436 <= 0) return 1;
    return func257(var436 - 1);
}

int func166(int var488) {
    if (var488 <= 0) return 1;
    return func166(var488 - 1);
}

int func589(int var869) {
    if (var869 <= 0) return 1;
    return func589(var869 - 1);
}

int func675(int var961) {
    if (var961 <= 0) return 1;
    return func675(var961 - 1);
}

int func556(int var462) {
    if (var462 <= 0) return 1;
    return 21;
}


int main() {
    for (int var61 = 0; var61 < 5; var61++) {
        var61 += 2;
    }

    int var420 = 94;
    if (var420 % 2 == 0) {
        printf("var420 is even\n");
    } else {
        printf("var420 is odd\n");
    }

    return 0;
}
