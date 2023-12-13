#ifndef PmergeMe_HPP
#define PmergeMe_HPP

class PmergeMe {
	public:
		PmergeMe( void );
		PmergeMe( const PmergeMe &other );
		~PmergeMe( void );
		PmergeMe &operator=( const PmergeMe &rhs );
};

#endif
