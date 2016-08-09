#pragma once

// If LIB_EXPORTS is defined, we export library methods. LIB_EXPORTS is defined by the corresponding CMake
// project only during the library compilation, thus clients who will want to link to this library will not
// have LIB_EXPORTS defined and will get "client" version of the header file.
#ifdef LIB_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

#include <string>

namespace LIBNS
{
    class LIB_API Library
    {
    public:
        /**
         * @brief Create an instance of Library with the greeting string defined.
         * @param greeting
         */
        Library(std::string greeting);

        /**
         * @brief Simply returns the greeting provided during the construction.
         * @return Greeting string.
         */
        std::string greet();

    private:
        std::string m_greeting;
    };
}
