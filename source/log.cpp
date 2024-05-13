#include "../header/log.h"
#include <iostream>

Log::Log()
{
    m_LogLevel = Warning;
}

void Log::SetLogLevel(Log::Level logLevel)
{
    m_LogLevel = logLevel;
}
void Log::PrintError(const char *message)
{
    if (m_LogLevel >= Error)
        std::cout << "[Error] " << message << std::endl;
}
void Log::PrintWarning(const char *message)
{
    if (m_LogLevel >= Warning)
        std::cout << "[Error] " << message << std::endl;
}
void Log::PrintInfo(const char *message)
{
    if (m_LogLevel >= Info)
        std::cout << "[Error] " << message << std::endl;
}