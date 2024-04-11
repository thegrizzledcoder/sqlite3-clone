//
// Created by john on 4/8/24.
//

#ifndef SQL_LITE_CLONE_COMMON_H
#define SQL_LITE_CLONE_COMMON_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();

void print_prompt();

void read_input(InputBuffer *input_buffer);

void close_input_buffer(InputBuffer *input_buffer);

#endif //SQL_LITE_CLONE_COMMON_H
