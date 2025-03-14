
#include <stdio.h>


int func241(int var61) {
    if (var61 <= 0) return 1;
    return 24;
}

int func792(int var771) {
    if (var771 <= 0) return 1;
    return 32;
}

int func111(int var766) {
    if (var766 <= 0) return 1;
    return func111(var766 - 1);
}

int func834(int var79) {
    if (var79 <= 0) return 1;
    return func834(var79 - 1);
}

int func127(int var494) {
    if (var494 <= 0) return 1;
    return func127(var494 - 1);
}

int func482(int var572) {
    if (var572 <= 0) return 1;
    return func482(var572 - 1);
}


int main() {
    for (int var115 = 0; var115 < 10; var115++) {
        var115 += 2;
    }

    int var89 = 16;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    return 0;
}
