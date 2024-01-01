#include "Thorium/IO/Logger.hpp"

int main() {
    Thorium::IO::Logger logger;
    logger.trace("hello world trace");
    logger.debug("hello world debug");
    logger.info("hello world info");
    logger.warn("hello world warn");
    logger.error("hello world error");
    logger.fatal("hello world fatal");
    return 0;
}