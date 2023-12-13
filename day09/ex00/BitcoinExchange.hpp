#ifndef BitcoinExchange_HPP
#define BitcoinExchange_HPP

class BitcoinExchange {
	public:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange &other );
		~BitcoinExchange( void );
		BitcoinExchange &operator=( const BitcoinExchange &rhs );
};

#endif
