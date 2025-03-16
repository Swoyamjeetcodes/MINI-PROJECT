
#include <stdio.h>


int func582(int var578) {
    if (var578 <= 0) return 1;
    return 19;
}

int func60(int var528) {
    if (var528 <= 0) return 1;
    return func60(var528 - 1);
}

int func127(int var229) {
    if (var229 <= 0) return 1;
    return func127(var229 - 1);
}

int func543(int var929) {
    if (var929 <= 0) return 1;
    return func543(var929 - 1);
}


int main() {
    int var859 = 0;
    while (var859 < 12) {
        var859 += 1;
        var859++;
    }

    int var78 = 71;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    int var389 = 47;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    int var923 = 20;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}
