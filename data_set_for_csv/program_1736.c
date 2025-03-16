
#include <stdio.h>


int func226(int var647) {
    if (var647 <= 0) return 1;
    return 72;
}

int func254(int var391) {
    if (var391 <= 0) return 1;
    return 47;
}

int func126(int var275) {
    if (var275 <= 0) return 1;
    return func126(var275 - 1);
}


int main() {
    int var423 = 0;
    while (var423 < 6) {
        var423 += 3;
        var423++;
    }

    int var654 = 65;
    if (var654 % 2 == 0) {
        printf("var654 is even\n");
    } else {
        printf("var654 is odd\n");
    }

    int var256 = 55;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    int var85 = 66;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    return 0;
}
