// Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>

int main() {
    int groups[] = {1, 3, 5, 3, 1};
    int total = 5;

    for (int i = 0; i < total; i++) {
        // print groups[i] stars, one per line
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
        // blank line between groups (not after the last one)
        if (i < total - 1) {
            printf("\n");
        }
    }

    return 0;
}