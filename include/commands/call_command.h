
#ifndef CALL_COMMAND_H
#define CALL_COMMAND_H

#include "command.h"
#include <string>
#include <vector>

//maybe make the formatter parse assign command params differently

class CallCommand: public Command{
public:
    CallCommand(std::vector<std::string>);
    void execute(Environment &, int *);
    int getNumParams();
    std::string getName();
};

#endif // ASSIGN_H

