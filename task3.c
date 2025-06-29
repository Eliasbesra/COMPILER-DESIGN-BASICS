#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
};

char operators[] = {'+', '-', '*', '/', '%', '=', '!', '>', '<', '&', '|', '^', '~'};

int isKeyword(char *word) {
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int isOperator(char ch) {
    int numOperators = sizeof(operators) / sizeof(operators[0]);
    for (int i = 0; i < numOperators; i++) {
        if (ch == operators[i]) {
            return 1;
        }
    }
    return 0;
}

int isValidIdentifierChar(char ch) {
    return isalnum(ch) || ch == '_';
}

void lexicalAnalyzer(FILE *inputFile) {
    char ch, buffer[100];
    int bufferIndex = 0;
    
    while ((ch = fgetc(inputFile)) != EOF) {
        if (isspace(ch)) {
            continue;
        }
        
        if (isOperator(ch)) {
            printf("Operator: %c\n", ch);
            continue;
        }
        
        if (isalpha(ch) || ch == '_') {
            bufferIndex = 0;
            buffer[bufferIndex++] = ch;
            
            while ((ch = fgetc(inputFile))) {
                if (isValidIdentifierChar(ch)) {
                    buffer[bufferIndex++] = ch;
                } else {
                    ungetc(ch, inputFile);
                    break;
                }
            }
            
            buffer[bufferIndex] = '\0';
            
            if (isKeyword(buffer)) {
                printf("Keyword: %s\n", buffer);
            } else {
                printf("Identifier: %s\n", buffer);
            }
        }
        
        else if (isdigit(ch)) {
            bufferIndex = 0;
            buffer[bufferIndex++] = ch;
            
            while ((ch = fgetc(inputFile)) && isdigit(ch)) {
                buffer[bufferIndex++] = ch;
            }
            
            ungetc(ch, inputFile);
            buffer[bufferIndex] = '\0';
            printf("Number: %s\n", buffer);
        }
    }
}

int main() {
    char filename[100];
    FILE *inputFile;
    
    printf("Enter the input file name: ");
    scanf("%s", filename);
    
    inputFile = fopen(filename, "r");
    if (inputFile == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    
    printf("\nLexical Analysis Results:\n");
    printf("-------------------------\n");
    lexicalAnalyzer(inputFile);
    
    fclose(inputFile);
    return 0;
}
