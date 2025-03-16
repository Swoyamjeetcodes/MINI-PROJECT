
#include <stdio.h>


int func124(int var978) {
    if (var978 <= 0) return 1;
    return 44;
}

int func675(int var747) {
    if (var747 <= 0) return 1;
    return func675(var747 - 1);
}

int func332(int var974) {
    if (var974 <= 0) return 1;
    return func332(var974 - 1);
}


int main() {
    int var519 = 0;
    while (var519 < 17) {
        var519 += 1;
        var519++;
    }    int var691 = 0;
    while (var691 < 5) {
        var691 += 3;
        var691++;
    }    int var368 = 0;
    while (var368 < 20) {
        var368 += 3;
        var368++;
    }

    int var621 = 97;
    if (var621 % 2 == 0) {
        printf("var621 is even\n");
    } else {
        printf("var621 is odd\n");
    }

    int var543 = 2;
    if (var543 % 2 == 0) {
        printf("var543 is even\n");
    } else {
        printf("var543 is odd\n");
    }

    return 0;
}
