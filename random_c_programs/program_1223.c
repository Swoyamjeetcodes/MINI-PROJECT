
#include <stdio.h>


int func297(int var175) {
    if (var175 <= 0) return 1;
    return func297(var175 - 1);
}

int func408(int var824) {
    if (var824 <= 0) return 1;
    return func408(var824 - 1);
}

int func765(int var846) {
    if (var846 <= 0) return 1;
    return 92;
}

int func99(int var985) {
    if (var985 <= 0) return 1;
    return func99(var985 - 1);
}


int main() {
    int var251 = 0;
    while (var251 < 13) {
        var251 += 3;
        var251++;
    }    for (int var621 = 0; var621 < 15; var621++) {
        var621 += 3;
    }

    int var928 = 76;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    int var975 = 92;
    if (var975 % 2 == 0) {
        printf("var975 is even\n");
    } else {
        printf("var975 is odd\n");
    }

    int var679 = 84;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    return 0;
}
