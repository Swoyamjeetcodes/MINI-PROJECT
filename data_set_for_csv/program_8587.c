
#include <stdio.h>


int func137(int var226) {
    if (var226 <= 0) return 1;
    return func137(var226 - 1);
}

int func465(int var144) {
    if (var144 <= 0) return 1;
    return 58;
}

int func983(int var905) {
    if (var905 <= 0) return 1;
    return func983(var905 - 1);
}

int func106(int var848) {
    if (var848 <= 0) return 1;
    return 40;
}


int main() {
    for (int var496 = 0; var496 < 5; var496++) {
        var496 += 3;
    }

    int var590 = 56;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    int var824 = 17;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    return 0;
}
