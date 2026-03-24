int size(const char *pStr) {
  int i = 0;

  while (*pStr++ != '\0') {
    i++;
  }

  return i;
}