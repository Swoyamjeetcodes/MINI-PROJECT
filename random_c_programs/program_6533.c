
#include <stdio.h>


int func198(int var68) {
    if (var68 <= 0) return 1;
    return 22;
}

int func471(int var82) {
    if (var82 <= 0) return 1;
    return 81;
}

int func322(int var531) {
    if (var531 <= 0) return 1;
    return func322(var531 - 1);
}

int func286(int var753) {
    if (var753 <= 0) return 1;
    return func286(var753 - 1);
}

int func901(int var322) {
    if (var322 <= 0) return 1;
    return 47;
}

int func425(int var598) {
    if (var598 <= 0) return 1;
    return 4;
}


int main() {
    int var885 = 0;
    while (var885 < 9) {
        var885 += 5;
        var885++;
    }    int var594 = 0;
    while (var594 < 19) {
        var594 += 5;
        var594++;
    }    int var703 = 0;
    while (var703 < 11) {
        var703 += 3;
        var703++;
    }    for (int var861 = 0; var861 < 8; var861++) {
        var861 += 4;
    }    for (int var412 = 0; var412 < 12; var412++) {
        var412 += 2;
    }    for (int var585 = 0; var585 < 17; var585++) {
        var585 += 4;
    }

    int var172 = 0;
    if (var172 % 2 == 0) {
        printf("var172 is even\n");
    } else {
        printf("var172 is odd\n");
    }

    int var147 = 56;
    if (var147 % 2 == 0) {
        printf("var147 is even\n");
    } else {
        printf("var147 is odd\n");
    }

    return 0;
}
