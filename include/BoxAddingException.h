#include <iostream>

class BoxAddingException : public std::exception {
private:
    std::string _message;
public:
    BoxAddingException(std::string message) : _message(message) {}
    std::string what() {
        return _message;
    }
};