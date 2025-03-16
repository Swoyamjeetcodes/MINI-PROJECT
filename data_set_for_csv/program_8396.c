
#include <stdio.h>


int func417(int var465) {
    if (var465 <= 0) return 1;
    return func417(var465 - 1);
}

int func272(int var957) {
    if (var957 <= 0) return 1;
    return 16;
}

int func189(int var732) {
    if (var732 <= 0) return 1;
    return 96;
}

int func73(int var590) {
    if (var590 <= 0) return 1;
    return 64;
}

int func407(int var498) {
    if (var498 <= 0) return 1;
    return func407(var498 - 1);
}


int main() {
    int var149 = 0;
    while (var149 < 5) {
        var149 += 2;
        var149++;
    }

    int var634 = 61;
    if (var634 % 2 == 0) {
        printf("var634 is even\n");
    } else {
        printf("var634 is odd\n");
    }

    return 0;
}
