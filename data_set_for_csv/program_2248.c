
#include <stdio.h>


int func944(int var134) {
    if (var134 <= 0) return 1;
    return 53;
}

int func506(int var506) {
    if (var506 <= 0) return 1;
    return func506(var506 - 1);
}

int func148(int var115) {
    if (var115 <= 0) return 1;
    return 97;
}


int main() {
    for (int var512 = 0; var512 < 6; var512++) {
        var512 += 1;
    }

    int var55 = 65;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    int var241 = 43;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    int var851 = 92;
    if (var851 % 2 == 0) {
        printf("var851 is even\n");
    } else {
        printf("var851 is odd\n");
    }

    return 0;
}
