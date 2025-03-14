
#include <stdio.h>


int func810(int var481) {
    if (var481 <= 0) return 1;
    return func810(var481 - 1);
}

int func767(int var965) {
    if (var965 <= 0) return 1;
    return func767(var965 - 1);
}


int main() {
    int var137 = 0;
    while (var137 < 7) {
        var137 += 2;
        var137++;
    }    for (int var306 = 0; var306 < 12; var306++) {
        var306 += 1;
    }

    int var281 = 97;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    return 0;
}
