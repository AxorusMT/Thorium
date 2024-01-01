#pragma once 
#include "Thorium/Core/Core.hpp"

namespace Thorium {
    namespace IO {
        enum class LogLevel {
            Trace,
            Debug,
            Info,
            Warn,
            Error,
            Fatal            
        };

        class Logger {
            public:
                void trace(std::string_view message, std::source_location location = std::source_location::current()) const noexcept;
                void debug(std::string_view message,  std::source_location location = std::source_location::current()) const noexcept;
                void info(std::string_view message,  std::source_location location = std::source_location::current()) const noexcept;
                void warn(std::string_view message, std::source_location location = std::source_location::current()) const noexcept;
                void error(std::string_view message,  std::source_location location = std::source_location::current()) const noexcept;
                void fatal(std::string_view message, std::source_location location = std::source_location::current()) const noexcept;

            private:
                void logAny(std::string_view message, std::string_view logClass, std::string_view timeString, const std::source_location location) const noexcept;
                std::string getLogTime() const noexcept; // std::format can throw, so no noexcept here.
        };
    }
}

