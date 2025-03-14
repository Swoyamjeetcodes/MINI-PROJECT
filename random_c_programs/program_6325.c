
#include <stdio.h>


int func732(int var768) {
    if (var768 <= 0) return 1;
    return func732(var768 - 1);
}

int func169(int var544) {
    if (var544 <= 0) return 1;
    return 39;
}


int main() {
    for (int var222 = 0; var222 < 12; var222++) {
        var222 += 5;
    }

    int var577 = 67;
    if (var577 % 2 == 0) {
        printf("var577 is even\n");
    } else {
        printf("var577 is odd\n");
    }

    int var736 = 53;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    return 0;
}
