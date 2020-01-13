
#ifndef COMMAND_H
#define COMMAND_H

#include <string>
#include <vector>
#include <map>
#include <memory>

class Command;
class Resolver;

#include "../runtime/resolver.h"

class Command{
public:
    enum Type{ // change to better solution, since this is needed by Command sub clas and Resolver
        STRING,
        INT,
        SYMBOL,
        UNKNOWN
    };
    Command(std::vector<std::string>);
    virtual void execute(Resolver &, std::map<std::string, std::pair<std::string, int>> *, std::vector<std::unique_ptr<Command>> &, int *) =0;
    virtual int getNumParams() =0;
    virtual std::string getName() =0;
    bool hasCorrectNumParams();
protected:
    std::vector<std::string> params;
};

#endif // COMMAND_H