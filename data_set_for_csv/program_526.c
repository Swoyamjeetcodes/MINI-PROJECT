
#include <stdio.h>


int func933(int var985) {
    if (var985 <= 0) return 1;
    return func933(var985 - 1);
}

int func498(int var938) {
    if (var938 <= 0) return 1;
    return func498(var938 - 1);
}

int func637(int var485) {
    if (var485 <= 0) return 1;
    return 42;
}


int main() {
    for (int var259 = 0; var259 < 20; var259++) {
        var259 += 3;
    }    for (int var143 = 0; var143 < 7; var143++) {
        var143 += 4;
    }

    int var85 = 0;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var740 = 39;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    int var910 = 24;
    if (var910 % 2 == 0) {
        printf("var910 is even\n");
    } else {
        printf("var910 is odd\n");
    }

    return 0;
}
