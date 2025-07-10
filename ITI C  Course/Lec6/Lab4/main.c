/*
Code Description:
                 Write a C code that asks the user to enter his name, age, and major,
                 then make a sentence with them
*/

#include <stdio.h> // input/output std library

void Msentence(char*, char*, char*);

int main(void){

    char name[20];
    char sentence[200];
    char major[20];
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your major: ");
    scanf("%s", major);
    Msentence(name, sentence, major);
    printf("%s\n", sentence);

    return 0;
}

void Msentence(char* name, char* sentence, char* major){
    int i, j;
    char *introduction1 = "I'm ";
    char *introduction2 = "\nmy age is ";
    char *introduction3 = "\nmy major is ";
    //name
    for(i = 0, j = 0; introduction1[j] != '\0'; i++, j++){
        sentence[i] = introduction1[j];
    }
    for(j = 0; name[j] != '\0'; i++, j++){
        sentence[i] = name[j];
    }
    //Major
    for(j = 0; introduction3[j] != '\0'; i++, j++){
        sentence[i] = introduction3[j];
    }
    for(j = 0; major[j] != '\0'; i++, j++){
        sentence[i] = major[j];
    }
    // Null terminate
    sentence[i] = '\0';
}
