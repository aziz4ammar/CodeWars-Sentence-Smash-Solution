#include <string.h>

char *smash(const char **words, size_t count)
{
  char *sentance = malloc(1000);
  int index = 0;
  
  for (int x = 0; x < count; x++) {
    for (int y = 0; words[x][y] != 0; y++)
      sentance[index++] = words[x][y];
    if (x + 1 != count)
      sentance[index++] = ' ';
  }
  sentance[index] = 0;
  return (sentance);
}