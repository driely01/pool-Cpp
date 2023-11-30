#ifndef Serializer_HPP
#define Serializer_HPP

#include <iostream>

struct Data {

	long x;
	long y;
	long z;
	long a;
	char c;
	bool b;
};

class Serializer {
	
	private:
		Serializer( void );
		Serializer( const Serializer &other );
		~Serializer( void );
		Serializer &operator=( const Serializer &rhs );
	
	public:
		static uintptr_t serialize( Data* ptr );
		static Data *deserialize( uintptr_t raw );
};

#endif
