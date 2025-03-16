
#include <stdio.h>


int func953(int var181) {
    if (var181 <= 0) return 1;
    return func953(var181 - 1);
}


int main() {
    for (int var565 = 0; var565 < 18; var565++) {
        var565 += 2;
    }

    int var837 = 45;
    if (var837 % 2 == 0) {
        printf("var837 is even\n");
    } else {
        printf("var837 is odd\n");
    }

    return 0;
}
