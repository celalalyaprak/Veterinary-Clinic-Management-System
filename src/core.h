#ifndef CORE_H
#define CORE_H

//////////////////////////////////////
// USER INTERFACE FUNCTIONS
//////////////////////////////////////
void clearInputBuffer(void);
void suspend(void);

//////////////////////////////////////
// USER INPUT FUNCTIONS
//////////////////////////////////////
int inputInt(void);
int inputIntPositive(void);
int inputIntRange(int, int);
char inputCharOption(const char str[]);
void inputCString(char* str, int, int);
void displayFormattedPhone(const char *str);

#endif // !CORE_H
