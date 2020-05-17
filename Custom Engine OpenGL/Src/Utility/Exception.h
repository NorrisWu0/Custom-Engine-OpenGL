#pragma once
#include <stdexcept>

#define Expect(_statement, _msg) if(!(_statement)) {throw std::runtime_error(_msg);}
#define Throw(_msg) {throw std::runtime_error(_msg);}