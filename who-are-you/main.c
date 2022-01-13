//
//  main.c
//  who-are-you
//
//  Created by Ali Rıza Şahin on 12.01.2022.
//

#include <stdio.h>
#include <string.h>

void sayTheName(char name[30]) {
    printf("Your name is, %s!\n\n", name);
}
void sayTheJob(char job[30]) {
    printf("Your job is, %s!\n\n", job);
}
void sayTheAge(int age) {
    printf("You are %i years old!\n\n", age);
}
void sayEverything(char name[30], char job[30], int age) {
    printf("%s is a %i year old %s.\n", name, age, job);
}

int main() {
    struct person {
        char name[30];
        char job[30];
        int age;
    };
    struct person personOne; // create a person structure
    
    printf("What is your name?\n"); // ask for the name input
    fgets(personOne.name, 30, stdin); // get the string with spaces between the words
    personOne.name[strcspn(personOne.name, "\r\n")] = 0; // remove the new line character
    sayTheName(personOne.name); // say hello with the given name

    printf("What is your job?\n"); // ask for the job input
    fgets(personOne.job, 30, stdin); // get the string with spaces between the words
    personOne.job[strcspn(personOne.job, "\r\n")] = 0; // remove the new line character
    sayTheJob(personOne.job);
    
    printf("How old are you?\n"); // ask for the job input
    scanf("%i", &personOne.age); // get the string with spaces between the words
    sayTheAge(personOne.age);
    
    sayEverything(personOne.name, personOne.job, personOne.age);
    
    return 0;
}
