#include <stdio.h>

int main() {
  char greetings[] = "Hi, friend!";
  greetings[0] = 'J';
  printf("%s", greetings);

  return 0;
}
