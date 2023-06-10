#include <string.h>
class Solution
{
private:
    std::string BOOLEAN_TRUE = "true";

public:
    bool stringToBoolean(string str)
    {
        return BOOLEAN_TRUE.compare(str) == 0;
    }
};