
#include <stdio.h>


int func773(int var866) {
    if (var866 <= 0) return 1;
    return func773(var866 - 1);
}

int func594(int var573) {
    if (var573 <= 0) return 1;
    return func594(var573 - 1);
}

int func398(int var522) {
    if (var522 <= 0) return 1;
    return func398(var522 - 1);
}


int main() {
    int var496 = 0;
    while (var496 < 8) {
        var496 += 2;
        var496++;
    }

    int var585 = 76;
    if (var585 % 2 == 0) {
        printf("var585 is even\n");
    } else {
        printf("var585 is odd\n");
    }

    return 0;
}
