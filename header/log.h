#pragma once
class Log
{
public:
    enum Level
    {
        Error,
        Warning,
        Info
    };

private:
    Level m_LogLevel;

public:
    void SetLogLevel(Level logLevel);
    void PrintError(const char *message);
    void PrintWarning(const char *message);
    void PrintInfo(const char *message);
};
