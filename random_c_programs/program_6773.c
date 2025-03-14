
#include <stdio.h>


int func7(int var275) {
    if (var275 <= 0) return 1;
    return func7(var275 - 1);
}

int func126(int var375) {
    if (var375 <= 0) return 1;
    return func126(var375 - 1);
}

int func278(int var765) {
    if (var765 <= 0) return 1;
    return func278(var765 - 1);
}


int main() {
    for (int var66 = 0; var66 < 20; var66++) {
        var66 += 1;
    }    for (int var276 = 0; var276 < 13; var276++) {
        var276 += 5;
    }

    int var80 = 85;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    return 0;
}
