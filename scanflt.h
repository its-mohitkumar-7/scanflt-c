/*
  scanfilt.h (Scanf Filter Library) - Safe input library for C

  Author: Jack Sparrow
  Email: mohitkumarkk0704th@gmail.com
  GitHub: https://github.com/its-mohitkumar-7
  Created: 19/10/2025
  Location: India
  License: MIT

  Description:
     Provides robust input functions for int, float, double, char, and strings.
     Solves common issues with scanf(), including buffer overflow, invalid input, and trailing newline handling.
*/

#ifndef SCANFLT_H
#define SCANFLT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <errno.h>

// Clear input buffer
static inline void clearbuffer() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}

// Remove trailing newline from string
static inline void trimnewline(char *str) {
  size_t len = strlen(str);
  if (len > 0 && str[len - 1] == '\n')
    str[len - 1] = '\0';
}

// Get integer input
static inline void getint(int *val, const char *msg) {
  char buffer[100];
  char *endptr;
  long temp;

  while (1) {
    if (msg != NULL && msg[0] != '\0') {
      printf("%s", msg);
    }

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("Input error. Please try again.\n");
      clearbuffer();
      continue;
    }

    trimnewline(buffer);

    if (strlen(buffer) == 0) {
      printf("Input cannot be empty. Please enter something.\n");
      continue;
    }

    errno = 0;
    temp = strtol(buffer, &endptr, 10);

    // Check for conversion errors and overflow
    if (endptr == buffer || *endptr != '\0') {
      printf("Invalid input! Please enter a valid integer.\n");
      continue;
    }

    if (errno == ERANGE || temp < INT_MIN || temp > INT_MAX) {
      printf("Number out of range! Please enter between %d and %d.\n", INT_MIN, INT_MAX);
      continue;
    }

    *val = (int)temp;
    break;
  }
}

// Get float input
static inline void getfloat(float *val, const char *msg) {
  char buffer[100];
  char *endptr;
  double temp;

  while (1) {
    if (msg != NULL && msg[0] != '\0') {
      printf("%s", msg);
    }

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("Input error. Please try again.\n");
      clearbuffer();
      continue;
    }

    trimnewline(buffer);

    if (strlen(buffer) == 0) {
      printf("Input cannot be empty. Please enter something.\n");
      continue;
    }

    errno = 0;
    temp = strtod(buffer, &endptr);

    // Check for conversion errors and overflow
    if (endptr == buffer || *endptr != '\0') {
      printf("Invalid input! Please enter a valid float.\n");
      continue;
    }

    if (errno == ERANGE) {
      printf("Number out of range!\n");
      continue;
    }

    *val = (float)temp;
    break;
  }
}

// Get double input
static inline void getdouble(double *val, const char *msg) {
  char buffer[100];
  char *endptr;

  while (1) {
    if (msg != NULL && msg[0] != '\0') {
      printf("%s", msg);
    }

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("Input error. Please try again.\n");
      clearbuffer();
      continue;
    }

    trimnewline(buffer);

    if (strlen(buffer) == 0) {
      printf("Input cannot be empty. Please enter something.\n");
      continue;
    }

    errno = 0;
    *val = strtod(buffer, &endptr);

    // Check for conversion errors and overflow
    if (endptr == buffer || *endptr != '\0') {
      printf("Invalid input! Please enter a valid double.\n");
      continue;
    }

    if (errno == ERANGE) {
      printf("Number out of range!\n");
      continue;
    }

    break;
  }
}

// Get single character input
static inline void getch(char *val, const char *msg) {
  char buffer[10];

  while (1) {
    if (msg != NULL && msg[0] != '\0') {
      printf("%s", msg);
    }

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("Input error. Please try again.\n");
      clearbuffer();
      continue;
    }

    trimnewline(buffer);

    if (strlen(buffer) != 1) {
      if (strlen(buffer) == 0) {
        printf("Input cannot be empty. Please enter a character.\n");
      } else {
        printf("Please enter exactly one character.\n");
      }
      continue;
    }

    *val = buffer[0];
    break;
  }
}

// Get string input
static inline void getstr(char *val, const char *msg) {
  char buffer[256]; // temporary buffer
  if (val == NULL) {
    printf("Invalid variable address.\n");
    return;
  }
  while (1) {
    if (msg != NULL && msg[0] != '\0') {
      printf("%s", msg);
    }
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("Input error. Please try again.\n");
      clearbuffer();
      continue;
    }
    trimnewline(buffer);
    if (strlen(buffer) == 0) {
      printf("Input cannot be empty. Please enter something.\n");
      continue;
    }
    // Copy into caller's variable
    strcpy(val, buffer);
    break;
  }
}

// Get string input with custom buffer
static inline void getstrbuff(char *buf, size_t size, const char *msg) {
  if (size == 0 || size > INT_MAX) {
    printf("Invalid buffer size.\n");
    return;
  }

  while (1) {
    if (msg != NULL && msg[0] != '\0') {
      printf("%s", msg);
    }

    if (fgets(buf, (int)size, stdin) == NULL) {
      printf("Input error. Please try again.\n");
      clearbuffer();
      continue;
    }

    trimnewline(buf);

    if (strlen(buf) == 0) {
      printf("Input cannot be empty. Please enter something.\n");
      continue;
    }

    break;
  }
}

#endif
