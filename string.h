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
	String(const char *string);
	

	unsigned int length() const;
	

	friend std::ostream &operator<<(std::ostream &stream, const String &string);
};



#endif
