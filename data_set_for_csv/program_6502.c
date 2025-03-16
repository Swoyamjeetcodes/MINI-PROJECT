
#include <stdio.h>


int func703(int var642) {
    if (var642 <= 0) return 1;
    return func703(var642 - 1);
}

int func930(int var856) {
    if (var856 <= 0) return 1;
    return func930(var856 - 1);
}

int func862(int var556) {
    if (var556 <= 0) return 1;
    return func862(var556 - 1);
}

int func952(int var403) {
    if (var403 <= 0) return 1;
    return func952(var403 - 1);
}


int main() {
    for (int var911 = 0; var911 < 5; var911++) {
        var911 += 1;
    }    int var736 = 0;
    while (var736 < 15) {
        var736 += 2;
        var736++;
    }    int var364 = 0;
    while (var364 < 5) {
        var364 += 4;
        var364++;
    }

    int var253 = 7;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    return 0;
}
