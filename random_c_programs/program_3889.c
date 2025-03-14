
#include <stdio.h>


int func511(int var531) {
    if (var531 <= 0) return 1;
    return func511(var531 - 1);
}

int func443(int var330) {
    if (var330 <= 0) return 1;
    return 96;
}

int func800(int var524) {
    if (var524 <= 0) return 1;
    return 95;
}

int func461(int var506) {
    if (var506 <= 0) return 1;
    return func461(var506 - 1);
}


int main() {
    for (int var446 = 0; var446 < 5; var446++) {
        var446 += 3;
    }

    int var139 = 34;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    return 0;
}
