#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap {

	private:
		std::string name;
		int hitPoints = 10;
		int energyPoints = 10;
		int attackDamage = 0;
	
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& other );
		~ClapTrap( void );

		void operator=( const ClapTrap& rhs );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int anount );
};

#endif