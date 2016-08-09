#include "Library.hh"

using namespace LIBNS;

Library::Library(std::string greeting)
    : m_greeting(greeting)
{

}

std::string Library::greet()
{
    return m_greeting;
}
