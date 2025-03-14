
#include <stdio.h>


int func147(int var751) {
    if (var751 <= 0) return 1;
    return 79;
}

int func933(int var440) {
    if (var440 <= 0) return 1;
    return func933(var440 - 1);
}

int func775(int var528) {
    if (var528 <= 0) return 1;
    return func775(var528 - 1);
}

int func138(int var238) {
    if (var238 <= 0) return 1;
    return func138(var238 - 1);
}

int func324(int var633) {
    if (var633 <= 0) return 1;
    return 87;
}


int main() {
    for (int var431 = 0; var431 < 11; var431++) {
        var431 += 1;
    }    for (int var53 = 0; var53 < 7; var53++) {
        var53 += 5;
    }

    int var417 = 43;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    int var165 = 5;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    int var984 = 74;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
