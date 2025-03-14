
#include <stdio.h>


int func159(int var809) {
    if (var809 <= 0) return 1;
    return func159(var809 - 1);
}

int func814(int var497) {
    if (var497 <= 0) return 1;
    return 81;
}

int func213(int var68) {
    if (var68 <= 0) return 1;
    return func213(var68 - 1);
}

int func775(int var158) {
    if (var158 <= 0) return 1;
    return func775(var158 - 1);
}

int func422(int var633) {
    if (var633 <= 0) return 1;
    return func422(var633 - 1);
}


int main() {
    for (int var475 = 0; var475 < 15; var475++) {
        var475 += 4;
    }

    int var618 = 89;
    if (var618 % 2 == 0) {
        printf("var618 is even\n");
    } else {
        printf("var618 is odd\n");
    }

    int var631 = 23;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    int var636 = 77;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
