
#include <stdio.h>


int func875(int var74) {
    if (var74 <= 0) return 1;
    return func875(var74 - 1);
}


int main() {
    for (int var861 = 0; var861 < 16; var861++) {
        var861 += 1;
    }

    int var678 = 86;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    return 0;
}
