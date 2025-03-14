
#include <stdio.h>


int func973(int var203) {
    if (var203 <= 0) return 1;
    return 4;
}

int func658(int var804) {
    if (var804 <= 0) return 1;
    return func658(var804 - 1);
}

int func655(int var115) {
    if (var115 <= 0) return 1;
    return func655(var115 - 1);
}

int func543(int var838) {
    if (var838 <= 0) return 1;
    return func543(var838 - 1);
}

int func735(int var135) {
    if (var135 <= 0) return 1;
    return func735(var135 - 1);
}


int main() {
    for (int var470 = 0; var470 < 11; var470++) {
        var470 += 3;
    }    for (int var445 = 0; var445 < 20; var445++) {
        var445 += 4;
    }    for (int var540 = 0; var540 < 11; var540++) {
        var540 += 1;
    }

    int var918 = 22;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    int var111 = 69;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    int var70 = 34;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    return 0;
}
