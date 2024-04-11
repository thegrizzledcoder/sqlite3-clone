//
// Created by john on 4/11/24.
//

#ifndef COMMAND_H
#define COMMAND_H

#include "command.h"
#include "common.h"

typedef enum {
    META_COMMAND_SUCCESS,
    META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

typedef enum {
    PREPARE_SUCCESS,
    PREPARE_UNRECOGNIZED_STATEMENT
} PrepareResult;

typedef enum {
    STATEMENT_INSERT,
    STATEMENT_SELECT
} StatementType;

typedef struct {
    StatementType type;
} Statement;

MetaCommandResult do_meta_command(InputBuffer* input_buffer);
PrepareResult prepare_statement(InputBuffer *input_buffer, Statement* statement);
void execute_statement(Statement *statement);

#endif //COMMAND_H
