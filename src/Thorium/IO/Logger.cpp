#include "Logger.hpp"

std::string Thorium::IO::Logger::getLogTime() const noexcept {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::string formatTimeString = std::format("{:%F %T}", now);

    // maybe make the length of subsecond time a member variable, so users can change it?
    
    return formatTimeString.substr(0, formatTimeString.length() - 5);
}

void Thorium::IO::Logger::logAny(std::string_view message, std::string_view logClass, std::string_view timeString, const std::source_location location) const noexcept {
    std::cout << std::format("{} [{}] @ <{}:{}:{} in {}> - {}", 
        timeString,
        logClass,
        location.file_name(),
        location.line(), 
        location.column(),
        location.function_name(),
        message
    ) << "\n";
}

void Thorium::IO::Logger::trace(std::string_view message, std::source_location location) const noexcept {
    logAny(message, "Trace", getLogTime(), location);
}

void Thorium::IO::Logger::debug(std::string_view message, std::source_location location) const noexcept {
    logAny(message, "Debug", getLogTime(), location);
}

void Thorium::IO::Logger::info(std::string_view message, std::source_location location) const noexcept {
    logAny(message, "Info", getLogTime(), location);
}

void Thorium::IO::Logger::warn(std::string_view message,  std::source_location location) const noexcept {
    logAny(message, "Warn", getLogTime(), location);
}

void Thorium::IO::Logger::error(std::string_view message,  std::source_location location) const noexcept {
    logAny(message, "Error", getLogTime(), location);
}

void Thorium::IO::Logger::fatal(std::string_view message,  std::source_location location) const noexcept {
    logAny(message, "FATAL ERROR", getLogTime(), location);
}
