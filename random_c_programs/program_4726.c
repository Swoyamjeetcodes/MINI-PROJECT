
#include <stdio.h>


int func449(int var975) {
    if (var975 <= 0) return 1;
    return 75;
}

int func418(int var781) {
    if (var781 <= 0) return 1;
    return func418(var781 - 1);
}

int func630(int var192) {
    if (var192 <= 0) return 1;
    return func630(var192 - 1);
}

int func278(int var597) {
    if (var597 <= 0) return 1;
    return func278(var597 - 1);
}


int main() {
    int var673 = 0;
    while (var673 < 5) {
        var673 += 3;
        var673++;
    }    int var198 = 0;
    while (var198 < 17) {
        var198 += 5;
        var198++;
    }

    int var955 = 97;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    int var974 = 60;
    if (var974 % 2 == 0) {
        printf("var974 is even\n");
    } else {
        printf("var974 is odd\n");
    }

    int var347 = 35;
    if (var347 % 2 == 0) {
        printf("var347 is even\n");
    } else {
        printf("var347 is odd\n");
    }

    return 0;
}
