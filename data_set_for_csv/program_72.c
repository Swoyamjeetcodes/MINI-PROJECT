
#include <stdio.h>


int func622(int var821) {
    if (var821 <= 0) return 1;
    return 73;
}

int func316(int var750) {
    if (var750 <= 0) return 1;
    return 24;
}

int func796(int var251) {
    if (var251 <= 0) return 1;
    return func796(var251 - 1);
}


int main() {
    for (int var550 = 0; var550 < 15; var550++) {
        var550 += 1;
    }    int var125 = 0;
    while (var125 < 11) {
        var125 += 3;
        var125++;
    }    int var616 = 0;
    while (var616 < 13) {
        var616 += 1;
        var616++;
    }

    int var738 = 44;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    return 0;
}
