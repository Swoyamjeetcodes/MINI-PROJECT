
#include <stdio.h>


int func823(int var917) {
    if (var917 <= 0) return 1;
    return func823(var917 - 1);
}


int main() {
    for (int var736 = 0; var736 < 5; var736++) {
        var736 += 4;
    }

    int var361 = 56;
    if (var361 % 2 == 0) {
        printf("var361 is even\n");
    } else {
        printf("var361 is odd\n");
    }

    return 0;
}
