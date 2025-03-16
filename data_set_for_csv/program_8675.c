
#include <stdio.h>


int func15(int var750) {
    if (var750 <= 0) return 1;
    return func15(var750 - 1);
}

int func727(int var498) {
    if (var498 <= 0) return 1;
    return 40;
}

int func203(int var851) {
    if (var851 <= 0) return 1;
    return func203(var851 - 1);
}

int func408(int var279) {
    if (var279 <= 0) return 1;
    return 85;
}

int func731(int var624) {
    if (var624 <= 0) return 1;
    return func731(var624 - 1);
}

int func835(int var148) {
    if (var148 <= 0) return 1;
    return 34;
}

int func494(int var103) {
    if (var103 <= 0) return 1;
    return func494(var103 - 1);
}


int main() {
    for (int var708 = 0; var708 < 14; var708++) {
        var708 += 4;
    }    for (int var249 = 0; var249 < 18; var249++) {
        var249 += 4;
    }    int var245 = 0;
    while (var245 < 17) {
        var245 += 4;
        var245++;
    }    int var454 = 0;
    while (var454 < 12) {
        var454 += 4;
        var454++;
    }

    int var172 = 10;
    if (var172 % 2 == 0) {
        printf("var172 is even\n");
    } else {
        printf("var172 is odd\n");
    }

    int var186 = 43;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    int var154 = 59;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
