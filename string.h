#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

class String
{
private:
	char *m_Buffer;
	unsigned int m_Size;

public:
	String(const char *string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size];
		memcpy(m_Buffer, string, m_Size);
	}

	friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

// To make this class able to work with cout <<
std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

#endif
