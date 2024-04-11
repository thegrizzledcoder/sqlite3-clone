//
// Created by john on 4/11/24.
//
#include <string.h>

#include "command.h"
#include "common.h"

MetaCommandResult do_meta_command(InputBuffer *input_buffer) {
    if (strcmp(input_buffer->buffer, ".exit") == 0) {
        exit(EXIT_SUCCESS);
    }
    return META_COMMAND_UNRECOGNIZED_COMMAND;
}

PrepareResult prepare_statement(InputBuffer *input_buffer, Statement *statement) {
    if (strncmp(input_buffer->buffer, "insert", 6) == 0) {
        statement->type = STATEMENT_INSERT;
        return PREPARE_SUCCESS;
    }

    if (strncmp(input_buffer->buffer, "select", 6) == 0) {
        statement->type = STATEMENT_SELECT;
        return PREPARE_SUCCESS;
    }

    return PREPARE_UNRECOGNIZED_STATEMENT;
}

void execute_statement(Statement *statement) {
    switch (statement->type) {
        case (STATEMENT_INSERT):
            printf("This is where we would do an insert.\n");
            break;
        case (STATEMENT_SELECT):
            printf("This is where we would do a select.\n");
            break;
    }
}