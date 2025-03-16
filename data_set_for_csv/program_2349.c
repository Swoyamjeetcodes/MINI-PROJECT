
#include <stdio.h>


int func396(int var521) {
    if (var521 <= 0) return 1;
    return func396(var521 - 1);
}

int func235(int var366) {
    if (var366 <= 0) return 1;
    return func235(var366 - 1);
}

int func306(int var517) {
    if (var517 <= 0) return 1;
    return func306(var517 - 1);
}


int main() {
    int var373 = 0;
    while (var373 < 10) {
        var373 += 5;
        var373++;
    }

    int var150 = 72;
    if (var150 % 2 == 0) {
        printf("var150 is even\n");
    } else {
        printf("var150 is odd\n");
    }

    int var349 = 17;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
