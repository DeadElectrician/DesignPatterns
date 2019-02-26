#ifndef ICOMMAND_H
#define ICOMMAND_H

class ICommand {
public:
    virtual void Execute() = 0;
    virtual ~ICommand() {}
};

#endif // ICOMMAND_H
