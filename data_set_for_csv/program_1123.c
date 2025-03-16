
#include <stdio.h>


int func207(int var734) {
    if (var734 <= 0) return 1;
    return 42;
}

int func150(int var504) {
    if (var504 <= 0) return 1;
    return func150(var504 - 1);
}


int main() {
    for (int var116 = 0; var116 < 6; var116++) {
        var116 += 1;
    }

    int var174 = 28;
    if (var174 % 2 == 0) {
        printf("var174 is even\n");
    } else {
        printf("var174 is odd\n");
    }

    return 0;
}
