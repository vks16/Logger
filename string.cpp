#include "string.h"

String::String(const char* string)
{
	m_Size = strlen(string);
	m_Buffer = new char[m_Size+1];
    memcpy(m_Buffer, string, m_Size);
	m_Buffer[m_Size] = '\0';
}

String::String(const String& other)
    : m_Size(other.m_Size)
{
    m_Buffer = new char[m_Size + 1];
    memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    // here i am not writing \0 at the end, because i know the other string will have that already
}

String::~String()
{
    delete[] m_Buffer;
}
unsigned int String::length() const
{
	return m_Size;
}

char& String::operator[](unsigned int index)
{
    return m_Buffer[index];
}

// To make this class able to work with cout <<
std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}