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
	String(const char*);
	
	// Copy constructor
	String(const String&);

	// If we want to disable copying for this class
	// String(const String&) = delete;
	unsigned int length() const;
	

	friend std::ostream &operator<<(std::ostream &stream, const String &string);

	char& operator[](unsigned int index);

	~String();
};



#endif
