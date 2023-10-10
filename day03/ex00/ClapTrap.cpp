#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {

	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name( name ) {

	std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
	: name( other.name ), hitPoints( other.hitPoints ),
	energyPoints( other.energyPoints ), attackDamage( other.attackDamage ) {

		*this = other;
		std::cout << "copy constructor called" << std::endl;
}

void ClapTrap::operator=( const ClapTrap& rhs ) {

	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
}

ClapTrap::~ClapTrap( void ) {

	std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {

	std::cout <<
				"ClapTrap " 	<< this->name			<<
				" attacks " 	<< target				<<
				", causing " 	<< this->attackDamage	<<
				" points of damage!" 					<<
	std::endl;
}