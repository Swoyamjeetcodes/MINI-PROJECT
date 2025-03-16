
#include <stdio.h>


int func627(int var641) {
    if (var641 <= 0) return 1;
    return 97;
}

int func872(int var706) {
    if (var706 <= 0) return 1;
    return func872(var706 - 1);
}

int func856(int var592) {
    if (var592 <= 0) return 1;
    return 30;
}


int main() {
    for (int var541 = 0; var541 < 11; var541++) {
        var541 += 3;
    }    int var969 = 0;
    while (var969 < 18) {
        var969 += 5;
        var969++;
    }

    int var777 = 72;
    if (var777 % 2 == 0) {
        printf("var777 is even\n");
    } else {
        printf("var777 is odd\n");
    }

    int var856 = 81;
    if (var856 % 2 == 0) {
        printf("var856 is even\n");
    } else {
        printf("var856 is odd\n");
    }

    int var599 = 61;
    if (var599 % 2 == 0) {
        printf("var599 is even\n");
    } else {
        printf("var599 is odd\n");
    }

    return 0;
}
