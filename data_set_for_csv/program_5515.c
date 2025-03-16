
#include <stdio.h>


int func678(int var954) {
    if (var954 <= 0) return 1;
    return func678(var954 - 1);
}


int main() {
    for (int var570 = 0; var570 < 7; var570++) {
        var570 += 3;
    }

    int var335 = 10;
    if (var335 % 2 == 0) {
        printf("var335 is even\n");
    } else {
        printf("var335 is odd\n");
    }

    return 0;
}
