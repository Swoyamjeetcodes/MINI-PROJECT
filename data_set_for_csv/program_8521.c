
#include <stdio.h>


int func248(int var202) {
    if (var202 <= 0) return 1;
    return func248(var202 - 1);
}


int main() {
    for (int var37 = 0; var37 < 5; var37++) {
        var37 += 2;
    }

    int var967 = 5;
    if (var967 % 2 == 0) {
        printf("var967 is even\n");
    } else {
        printf("var967 is odd\n");
    }

    return 0;
}
